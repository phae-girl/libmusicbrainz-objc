//
// @file MBFreeDbDisc.m
// @date Jun 06 2012
// @copyright
//   2012 Brandon LeBlanc <demosdemon@gmail.com> \n
//   This program is made avaliable under the terms of the MIT License.
//
// @brief FreeDbDisc Entity

#if ! __has_feature(objc_arc)
# warning This file must be compiled with ARC. Use -fobjc-arc flag (or convert project to ARC).
#endif

#import "MB.h"

@implementation MBFreedbDisc

MB_ATTRIBUTE(Id);
MB_STRING_ELEMENT(Title);
MB_STRING_ELEMENT(Artist);
MB_STRING_ELEMENT(Category);
MB_STRING_ELEMENT(Year);
MB_ELEMENT(NonmbTrackList);

@end
