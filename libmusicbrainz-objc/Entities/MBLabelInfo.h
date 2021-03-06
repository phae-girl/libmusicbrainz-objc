//
// @file MBLabelInfo.h
// @date Jun 06 2012
// @copyright
//   2012 Brandon LeBlanc <demosdemon@gmail.com> \n
//   This program is made avaliable under the terms of the MIT License.
//
// @brief LabelInfo Entity

#import "MBEntity.h"

/// Represents a `<label-info/>` element
@interface MBLabelInfo : MBEntity

@property (nonatomic, readonly) NSString * CatalogNumber;
@property (nonatomic, readonly) MBLabel * Label;

@end

