// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"



/**
 
 Type defining the <b>TicketListingDetails</b> container, which is used in
 an Add/Revise/Relist call to provide more details about event tickets.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_TicketListingDetailsType : NSObject <PicoBindable> {

@private
    NSString *_eventTitle;
    NSString *_venue;
    NSString *_printedDate;
    NSString *_printedTime;
    NSMutableArray *_any;

}


/**
 
 The name of the event, as shown on the ticket. Typically the
 headliner. There is no maximum number of words or characters.
 However, the words in the name must be an exact match (or a subset
 consisting of complete words) to the words in the product title in
 the catalog. The words in the name are matched using OR logic
 (the order of the words does not matter). As with all strings, you
 need to escape reserved characters such as ampersand.
 See the eBay Trading API Guide for more information about how
 to specify this value.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *eventTitle;

/**
 
 The name of the venue, as shown on the ticket.
 The validation rules are the same as the rules for the event name.
 In addition, eBay supports both US English and UK English spelling
 variations for typical words found on tickets (such as "theater" and
 "theatre"). As with all strings, you need to escape reserved
 characters such as ampersand.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *venue;

/**
 
 The date of the event, as shown on the ticket. Use the date shown on
 the ticket, without attempting to adjust it for a different time
 zone (such as Pacific time or GMT).<br>
 <br>
 In most cases, you should be able to specify any numeric date format
 in month/day/year order. eBay supports m or mm for the month,
 d or dd for the day, and yy or yyyy for the year, in all
 combinations. The delimiters must be forward slashes (/).
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *printedDate;

/**
 
 The time of the event, as shown on the ticket. Use the time value
 shown on the ticket, without attempting to convert it to a different
 time zone (such as Pacific time or GMT). Do not round the value up
 or down (e.g., do not round 7:01 PM to 7:00 PM).<br>
 <br>
 In most cases, you should be able to specify the time format exactly
 as shown on the ticket. For a list of formats that have been tested,
 see the eBay Trading API Guide.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *printedTime;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
