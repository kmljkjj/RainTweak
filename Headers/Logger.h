#import <Foundation/Foundation.h>

#ifdef __DEBUG__
#define NSLog(fmt, ...) NSLog((@"[RainTweak] " fmt), ##__VA_ARGS__)
#else
#define NSLog(...)
#endif

@interface Logger : NSObject
+ (void)log:(NSString *)message;
@end
