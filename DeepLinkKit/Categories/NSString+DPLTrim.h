#import <Foundation/Foundation.h>

@interface NSString (DPLTrim)

/// Trims whitespace, new lines, and forward slashes from the receiver.
- (NSString *)DPL_trimPath;

@end
