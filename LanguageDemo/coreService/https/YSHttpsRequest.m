//
//  YSHttpsRequest.m
//  LanguageDemo
//
//  Created by Bob on 2022/12/30.
//

#import "YSHttpsRequest.h"
#import <AFNetworking/AFNetworking.h>

@interface YSHttpsRequest ()

@property (nonatomic, strong) AFHTTPSessionManager *sessionManager;

@end

@implementation YSHttpsRequest

#pragma mark 网络请求
- (void)doGetRequestWithUrlStr:(NSString *)urlStr
                        params:(NSDictionary *)params
                       headers:(NSDictionary *)headers
                       success:(void (^)(NSDictionary *responseObject))successBlock
                       failure:(void (^)(NSError *error))failureBlock{
    
    [self.sessionManager GET:urlStr parameters:params headers:@{} progress:^(NSProgress * _Nonnull downloadProgress) {
        ;
    } success:^(NSURLSessionDataTask * _Nonnull task, id  _Nullable responseObject) {
        
        if (successBlock) {
            successBlock(responseObject);
        }
        
    } failure:^(NSURLSessionDataTask * _Nullable task, NSError * _Nonnull error) {
        
        if (failureBlock) {
            failureBlock(error);
        }
    }];
}

- (void)doPostRequestWithUrlStr:(NSString *)urlStr
                         params:(NSDictionary *)params
                        headers:(NSDictionary *)headers
                        success:(void (^)(NSDictionary *responseObject))successBlock
                        failure:(void (^)(NSError *error))failureBlock{
    
    [self.sessionManager POST:urlStr parameters:params headers:headers progress:^(NSProgress * _Nonnull uploadProgress) {
        ;
    } success:^(NSURLSessionDataTask * _Nonnull task, id  _Nullable responseObject) {
        
        if (successBlock) {
            successBlock(responseObject);
        }
        
    } failure:^(NSURLSessionDataTask * _Nullable task, NSError * _Nonnull error) {
        
        if (failureBlock) {
            failureBlock(error);
        }
        
    }];
}

#pragma mark 取消网络请求
- (void)cancelTaskWithUrl:(NSURL *)url{
    for (NSURLSessionDataTask *task in _sessionManager.tasks) {
        if ([task.originalRequest.URL.absoluteString isEqualToString:url.absoluteString]) {
            [task cancel];
            break;
        }
    }
}

- (void)cancelAllTask{
    [_sessionManager.operationQueue cancelAllOperations];
}

#pragma mark 文件上传和下载
- (void)uploadFile:(NSString *)urlStr filePath:(NSString *)path{
    NSURLSessionConfiguration *configuration = [NSURLSessionConfiguration defaultSessionConfiguration];
    AFURLSessionManager *manager = [[AFURLSessionManager alloc] initWithSessionConfiguration:configuration];

    NSURL *URL = [NSURL URLWithString:@"http://example.com/upload"];
    NSURLRequest *request = [NSURLRequest requestWithURL:URL];

    NSURL *filePath = [NSURL fileURLWithPath:@"file://path/to/image.png"];
    NSURLSessionUploadTask *uploadTask = [manager uploadTaskWithRequest:request fromFile:filePath progress:nil completionHandler:^(NSURLResponse *response, id responseObject, NSError *error) {
        if (error) {
            NSLog(@"Error: %@", error);
        } else {
            NSLog(@"Success: %@ %@", response, responseObject);
        }
    }];
    [uploadTask resume];
}

- (void)uploadFileMultipart{
    NSMutableURLRequest *request = [[AFHTTPRequestSerializer serializer] multipartFormRequestWithMethod:@"POST" URLString:@"http://example.com/upload" parameters:nil constructingBodyWithBlock:^(id<AFMultipartFormData> formData) {
            [formData appendPartWithFileURL:[NSURL fileURLWithPath:@"file://path/to/image.jpg"]
                                       name:@"file"
                                   fileName:@"filename.jpg"
                                   mimeType:@"image/jpeg"
                                      error:nil];
        } error:nil];

    AFURLSessionManager *manager = [[AFURLSessionManager alloc] initWithSessionConfiguration:[NSURLSessionConfiguration defaultSessionConfiguration]];

    NSURLSessionUploadTask *uploadTask;
    uploadTask = [manager uploadTaskWithStreamedRequest:request progress:^(NSProgress * _Nonnull uploadProgress) {

        
                  }  completionHandler:^(NSURLResponse * _Nonnull response, id  _Nullable responseObject, NSError * _Nullable error) {
                      if (error) {
                          NSLog(@"Error: %@", error);
                      } else {
                          NSLog(@"%@ %@", response, responseObject);
                      }
                  }];

    [uploadTask resume];
}

- (void)downloadFile:(NSString *)urlStr{
    NSURLSessionConfiguration *configuration = [NSURLSessionConfiguration defaultSessionConfiguration];
    AFURLSessionManager *manager = [[AFURLSessionManager alloc] initWithSessionConfiguration:configuration];

    NSURL *URL = [NSURL URLWithString:@"http://example.com/download.zip"];
    NSURLRequest *request = [NSURLRequest requestWithURL:URL];

    NSURLSessionDownloadTask *downloadTask = [manager downloadTaskWithRequest:request progress:nil destination:^NSURL *(NSURL *targetPath, NSURLResponse *response) {
        NSURL *documentsDirectoryURL = [[NSFileManager defaultManager] URLForDirectory:NSDocumentDirectory inDomain:NSUserDomainMask appropriateForURL:nil create:NO error:nil];
        return [documentsDirectoryURL URLByAppendingPathComponent:[response suggestedFilename]];
    } completionHandler:^(NSURLResponse *response, NSURL *filePath, NSError *error) {
        NSLog(@"File downloaded to: %@", filePath);
    }];
    [downloadTask resume];
}

#pragma mark lazy load
- (AFHTTPSessionManager *)sessionManager{
    if (!_sessionManager) {
        _sessionManager = [AFHTTPSessionManager manager];
        
        _sessionManager.requestSerializer.timeoutInterval = 30.f;
        
        NSSet *types = [[NSSet alloc] initWithObjects:@"application/xml", @"application/json", @"text/plain", @"text/xml", @"text/html", nil];
        _sessionManager.responseSerializer.acceptableContentTypes = types;
    }
    return _sessionManager;
}
@end
