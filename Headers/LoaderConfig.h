#pragma once
#import <Foundation/Foundation.h>

@interface LoaderConfig : NSObject
+ (instancetype)shared;
- (BOOL)loadConfig;
- (void)saveConfig;
@property (nonatomic, assign) BOOL customLoadUrlEnabled;
@property (nonatomic, strong) NSURL *customLoadUrl;
@end
