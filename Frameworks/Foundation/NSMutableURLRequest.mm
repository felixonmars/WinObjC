//******************************************************************************
//
// Copyright (c) 2015 Microsoft Corporation. All rights reserved.
//
// This code is licensed under the MIT License (MIT).
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
//******************************************************************************

#include "Starboard.h"
#include "Foundation/NSURLRequest.h"
#include "Foundation/NSString.h"
#include "Foundation/NSMutableDictionary.h"
#include "Foundation/NSMutableURLRequest.h"
#include "NSURLRequestInternal.h"

@implementation NSMutableURLRequest

- (id)initWithURL:(id)url {
    _url = [url absoluteURL];
    _timeoutInterval = 30.0;
    _headerFields = [NSMutableDictionary new];
    _method = @"GET";
    _shouldHandleCookies = true;

    return self;
}

- (void)addValue:(id)value forHTTPHeaderField:(id)headerName {
    id existing;

    existing = [_headerFields objectForKey:headerName];
    if (existing != nil)
        value = [[existing stringByAppendingString:@","] stringByAppendingString:value];

    [_headerFields setObject:[value stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceCharacterSet]]
                      forKey:headerName];
}

- (void)setValue:(id)value forHTTPHeaderField:(id)headerName {
    [_headerFields setObject:[value stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceCharacterSet]]
                      forKey:headerName];
}

- (void)setHTTPMethod:(id)method {
    _method.attach([method copy]);
}

- (void)setAllHTTPHeaderFields:(id)fields {
    id state = [fields keyEnumerator];
    id key;

    [_headerFields removeAllObjects];
    while ((key = [state nextObject]) != nil) {
        id value = [fields objectForKey:key];

        if ([key isKindOfClass:[NSString class]] && [value isKindOfClass:[NSString class]])
            [_headerFields setObject:[value stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceCharacterSet]]
                              forKey:key];
    }
}

- (void)setHTTPBody:(id)body {
    _body.attach([body copy]);
}

- (void)setHTTPBodyStream:(id)stream {
    _bodyStream = stream;
}

- (void)setCachePolicy:(NSURLRequestCachePolicy)policy {
    _cachePolicy = policy;
}

- (void)setHTTPShouldHandleCookies:(BOOL)shouldHandleCookies {
    _shouldHandleCookies = shouldHandleCookies ? true : false;
}

- (void)setURL:(id)url {
    _url = url;
}

- (void)setTimeoutInterval:(double)interval {
    _timeoutInterval = interval;
}

- (void)setHTTPShouldUsePipelining:(BOOL)shouldPipeline {
}

- (id)copyWithZone:(NSZone*)zone {
    NSURLRequest* ret = [[NSMutableURLRequest alloc] initWithURL:(id)_url
                                                     cachePolicy:0
                                                 timeoutInterval:30.0]; /* [BUG: Make it copy all properties] */
    ret->_headerFields = [_headerFields mutableCopy];
    ret->_method.attach([_method copy]);
    ret->_body.attach([_body copy]);
    ret->_shouldHandleCookies = _shouldHandleCookies;
    ret->_shouldDiscardData = _shouldDiscardData;
    ret->_cachePolicy = _cachePolicy;
    ret->_bodyStream = _bodyStream;

    return ret;
}

@end
