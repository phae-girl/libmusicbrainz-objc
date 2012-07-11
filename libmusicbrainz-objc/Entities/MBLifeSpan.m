//
// @file MBLifeSpan.m
// @date Jun 06 2012
// @copyright
//   2012 Brandon LeBlanc <demosdemon@gmail.com> \n
//   This program is made avaliable under the terms of the MIT License.
//
// @brief LifeSpan Entity

#if ! __has_feature(objc_arc)
# warning This file must be compiled with ARC. Use -fobjc-arc flag (or convert project to ARC).
#endif

#import "MB.h"
#import "../NSString+MBKeyManipulation.h"

@implementation MBLifeSpan

MB_STRING_ELEMENT(Begin);
MB_STRING_ELEMENT(End);

@synthesize Ended = _Ended;

- (void) setEnded:(MBEntity *)entity
{
  _Ended = (entity && [entity.StringValue equals:@"true"]);
}

@end