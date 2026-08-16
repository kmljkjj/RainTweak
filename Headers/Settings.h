#import <Foundation/Foundation.h>

@interface Settings : NSObject
+ (id)get:(NSString *)key def:(id)def;
+ (BOOL)getBoolean:(NSString *)key def:(BOOL)def;
+ (void)set:(NSString *)key value:(id)value;
@end
