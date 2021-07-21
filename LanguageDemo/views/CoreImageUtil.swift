//
//  CoreImageUtil.swift
//  LanguageDemo
//
//  Created by Bob on 2021/7/21.
//

import UIKit
import CoreImage
import AVFoundation

class CoreImageUtil: NSObject {

    let filter = CIFilter(name: "CISepiaTone",
                          parameters: [kCIInputIntensityKey: 0.8])
    
    func applyFilterChain(to image: CIImage) -> CIImage {
        
        let colorFilter = CIFilter(name: "CIPhotoEffectProcess",
                                   parameters: [kCIInputImageKey: image])!
        
        let bloomImage = colorFilter.outputImage!.applyingFilter("CIBloom",
                                                                 parameters: [
            kCIInputRadiusKey: 10.0,
            kCIInputIntensityKey: 1.0
        ])
        
        let cropRect = CGRect(x: 350, y: 350, width: 150, height: 150)
        let cropedImage = bloomImage.cropped(to: cropRect)
        
        return cropedImage
    }
    
    func displayFilteredImage(image: UIImage) -> Void {
        let inputImage = CIImage(image: image)
        filter?.setValue(inputImage, forKey: kCIInputImageKey)
        
        var imageView: UIImageView!
        imageView.image = UIImage(ciImage: (filter?.outputImage!)!)
    }
    
    func processVideo(asset: AVAsset) -> Void {
    
        // 声音和视频混合
        let compositon = AVVideoComposition(asset: asset) { request in
            
            let source = request.sourceImage.clampedToExtent()
            self.filter?.setValue(source, forKey: kCIInputImageKey)
            
            let seconds = CMTimeGetSeconds(request.compositionTime)
            self.filter?.setValue(seconds * 10.0, forKey: kCIInputRadiusKey)
            
            let output = self.filter?.outputImage!.cropped(to: request.sourceImage.extent)
            
            request.finish(with: output as! Error)
        }
    }
}
