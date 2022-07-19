//
//  RequestWithCurlWrapper.mm
//  iOS-OCWrapper-cCurl
//
//  Created by Yilmaz Edis on 2022/7/19.
//

#import <Foundation/Foundation.h>
#import "RequestWithCurlWrapper.h"
#include "RequestWithCurl.h"

@implementation RequestWithCurlWrapper

- (void)sendRequest {
    RequestWithCurl request;
    request.sendRequest();
}
@end
