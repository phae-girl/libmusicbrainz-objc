//
// @file MBEntity.h
// @author Joachim LeBlanc
// @date May 13 2012
// @copyright
//   2012 Joachim LeBlanc <demosdemon@gmail.com> \n
//   This program is made available under the terms of the MIT License.
//
// @brief Base class for all entities

#import <Foundation/Foundation.h>
#import "MBUtils.h"
#import "MBUniqueIdentifier.h"
#import "XML.h"

/// Base class for all elements in the XML Webservice Schema
///
/// MBEntity does all the heavy lifting. MBEntity takes the data from the 
/// webservice response and will create the corresponding objects, set the 
/// corresponding properties, and if the xml response represents an unknown
/// yet still valid attribute or element, the extra information will be stored
/// in ExtraAttributes and ExtraElements, respectively. 
@interface MBEntity : NSObject <NSCoding>
{
 @private
  NSMutableDictionary *_ExtraAttributes;
  NSMutableDictionary *_ExtraElements;
  NSString *_Text;
}

/// Extra Attributes Dictionary
///
/// Keys and Values are NSString objects.
@property (nonatomic, readonly) NSDictionary *ExtraAttributes;

/// ExtraElements Dictionary
///
/// Keys are NSString with the element name.
/// Values are MBEntity or NSString objects.
@property (nonatomic, readonly) NSDictionary *ExtraElements;

/// String Value
///
/// The string value enclosed within an element. This is not the XML string
/// value. Subclasses that explicity have a value will have a property Value
/// with the correct type: string, number, etc.
@property (nonatomic, readonly) NSString *Text;


/// Element Name
///
/// Returnes the element name for this instance.
@property (nonatomic, readonly) NSString * ElementName;

/// Main initializer.
///
/// Inits the entity with the XML element it represents
/// @param element XML Element this object represents. If element is nil, nil is
/// returned
- (id) initWithElement:(NSXMLElement *)element;

/// Quick allocation and initialization of the entity
///
/// Inits the entity with the XML element it represents
/// @param element XML Element this object represents. If element is nil, nil is
/// returned
+ (id) entityWithElement:(NSXMLElement *)element;

/// Parse XML Element that represents this object.
///
/// This method will iterate through every attribute and element in the XML data
/// that corresponds to this object. It will call `set<key>:` for every attribute
/// and element where key is the the the local name of the attribute or element.
/// If `set<key>:` is not defined by the subclass, the attribute or element will
/// be added to ExtraAttributes or ExtraElements. Using `@synthesize` is fine for
/// attributes as the passed value will always be an NSString or NSNull type but
/// is not adequate for elements because the value passed will be the 
/// NSXMLElement (DDXMLElement on iOS) for that element.
///
/// @param element NSXMLElement (DDXMLElement on iOS) that corresponds to this
/// object
- (void) parseElement:(NSXMLElement *)element;

@end
