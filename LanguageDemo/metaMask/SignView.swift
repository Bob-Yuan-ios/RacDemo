//
//  SignView.swift
//  metamask-ios-sdk_Example
//

import SwiftUI
import Combine
import metamask_ios_sdk

struct SignView: View {
    @ObservedObject var ethereum: Ethereum = MetaMaskSDK.shared.ethereum

    @State var message = ""

    @State private var cancellables: Set<AnyCancellable> = []

    @State var result: String = ""
    @State private var errorMessage = ""
    @State private var showError = false

    var body: some View {
        GeometryReader { geometry in
            Form {
                Section {
                    Text("Message")
                        .modifier(TextCallout())
                    TextEditor(text: $message)
                        .modifier(TextCaption())
                        .frame(height: geometry.size.height / 2)
                        .modifier(TextCurvature())
                }

                Section {
                    Text("Result")
                        .modifier(TextCallout())
                    TextEditor(text: $result)
                        .modifier(TextCaption())
                        .frame(minHeight: 40)
                        .modifier(TextCurvature())
                }

                Section {
                    Button {
                        signInput()
                    } label: {
                        Text("Sign message")
                            .modifier(TextButton())
                            .frame(maxWidth: .infinity, maxHeight: 32)
                    }
                    .alert(isPresented: $showError) {
                        Alert(
                            title: Text("Error"),
                            message: Text(errorMessage)
                        )
                    }
                    .modifier(ButtonStyle())
                }
            }
        }
        .onAppear {
            updateMessage()
        }
        .onChange(of: ethereum.chainId) { _ in
            updateMessage()
        }
    }

    
    func updateMessage() {
        message = "0x".appending(LDEncypt.hexString(from: "123")) 
        print("### 780 message: \(message)")
    }
    
    func getBalance() {
        let from = ethereum.selectedAddress
        let params: [String] = [from, "latest"]
        let balanceRequest = EthereumRequest(
            method: .ethGetBalance,
            params: params
        )
        
        ethereum.request(balanceRequest)?.sink(receiveCompletion: { completion in
            switch completion {
            case let .failure(error):
                errorMessage = error.localizedDescription
                showError = true
                print("Error: \(errorMessage)")
            default: break
                
            }
        }, receiveValue: { value in
            
            let result1 = value as? String ?? ""
            print("result: balance ... \(result1)")
            
        }).store(in: &cancellables)
    }

    func signInput() {
        let from = ethereum.selectedAddress
        let params: [String] = [from, message]
        let signRequest = EthereumRequest(
            method: .personalSign,
            params: params
        )

        ethereum.request(signRequest)?.sink(receiveCompletion: { completion in
            switch completion {
            case let .failure(error):
                errorMessage = error.localizedDescription
                showError = true
                print("Error: \(errorMessage)")
            default: break
                
            }
        }, receiveValue: { value in
            
            self.result = value as? String ?? ""
            print("result: \(self.result)")
            
            getBalance()
            
        }).store(in: &cancellables)
    }
}

struct SignView_Previews: PreviewProvider {
    static var previews: some View {
        SignView()
    }
}
