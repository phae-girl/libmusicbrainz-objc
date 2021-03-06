//
// @file MBNameCredit.h
// @author Joachim LeBlanc
// @date June 19 2012
// @copyright
//   2012 Joachim LeBlanc <demosdemon@gmail.com> \n
//   This program is made available under the terms of the MIT License.
//
// @brief

#import "MBEntity.h"
@class MBArtist;

/// Represents a `<name-credit/>` element
@interface MBNameCredit : MBEntity

@property (nonatomic, readonly) NSString * Joinphrase;
@property (nonatomic, readonly) NSString * Name;
@property (nonatomic, readonly) MBArtist * Artist;

@end
