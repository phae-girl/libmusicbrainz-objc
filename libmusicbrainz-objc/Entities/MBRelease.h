//
// @file MBRelease.h
// @author Jens Lukas
// @date Jun 7 2010
// @copyright
//   2010 Jens Lukas <contact@jenslukas.com> \n
//   2012 Brandon LeBlanc <demosdemon@gmail.com> \n
//   This program is made available under the terms of the MIT License.
//
// @brief Release entity

#import "MBRateAndTaggableEntity.h"

@class MBTextRepresentation, MBArtistCredit, MBReleaseGroup, MBList;

/// Represents a `<release/>` element
@interface MBRelease : MBRateAndTaggableEntity

/// Title of the release
@property (nonatomic, readonly) NSString *Title;
/// Status of the release
@property (nonatomic, readonly) NSString *Status;
/// Quality of the release data
@property (nonatomic, readonly) NSString *Quality;
/// Disambiguation comment for the release
@property (nonatomic, readonly) NSString *Disambiguation;
/// Packaging for this release
@property (nonatomic, readonly) NSString *Packaging;
/// Text Representation for this release
@property (nonatomic, readonly) MBTextRepresentation *TextRepresentation;
/// Artist Credit for this release
@property (nonatomic, readonly) MBArtistCredit *ArtistCredit;
/// Release Group that this release belongs to
@property (nonatomic, readonly) MBReleaseGroup *ReleaseGroup;
/// Date of release.
///
/// Matches the regular expression `[0-9]{4}(-[0-9]{2}){0,2}` or empty.
@property (nonatomic, readonly) NSString *Date;
/// ISO-3166 Country Code for this release
///
/// Matches regular expression `[A-Z]{2}` or empty
@property (nonatomic, readonly) NSString *Country;
/// Barcode for the release
@property (nonatomic, readonly) NSString *Barcode;
/// Amazon ASIN for the release
@property (nonatomic, readonly) NSString *Asin;
/// MBList with MBLabelInfo objects
@property (nonatomic, readonly) MBList *LabelInfoList;
/// MBList with MBMedium objects
@property (nonatomic, readonly) MBList *MediumList;
/// MBList with MBRelation objects
@property (nonatomic, readonly) MBList *RelationList;
/// MBList with MBCollection objects
@property (nonatomic, readonly) MBList *CollectionList;

@end
