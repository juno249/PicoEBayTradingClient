// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Trading_TicketListingDetailsType;
@class Trading_BrandMPNType;

/**
 
 Contains product information that can be included in a listing.
 Applicable for listings that use eBay's Pre-filled Item Information feature.
 See the Developer's Guide for details on working with Pre-filled Item Information.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_ProductListingDetailsType : NSObject <PicoBindable> {

@private
    NSString *_productID;
    NSNumber *_includeStockPhotoURL;
    NSNumber *_includePrefilledItemInformation;
    NSNumber *_useStockPhotoURLAsGallery;
    NSString *_stockPhotoURL;
    NSMutableArray *_copyright;
    NSString *_productReferenceID;
    NSString *_detailsURL;
    NSString *_productDetailsURL;
    NSNumber *_returnSearchResultOnDuplicates;
    NSNumber *_listIfNoProduct;
    NSString *_gtin;
    NSString *_isbn;
    NSString *_upc;
    NSString *_ean;
    Trading_BrandMPNType *_brandMPN;
    Trading_TicketListingDetailsType *_ticketListingDetails;
    NSNumber *_useFirstProduct;
    NSMutableArray *_any;

}


/**
 
 eBay's unique identifier for a specific version of a product.
 This is the long alphanumeric ID that is returned from
 GetProductSearchResults and related calls.
 See the Trading API Guide for information about finding this type of
 product ID. (For the shorter product ID (ePID) value that is
 displayed on the eBay Web site, see ProductReferenceID instead.)<br>
 <br>
 If the primary and secondary categories are both catalog-enabled,
 this ID should correspond to the primary category
 (not the secondary category).<br>
 <br>
 In item-listing requests, if you pass in an old product ID,
 eBay lists the item with the latest version of the product and the
 latest product ID, and the call returns a warning indicating that
 the data has changed.<br>
 <br>
 Some sites (such as eBay US, Germany, Austria, and Switzerland) are updating,
 replacing, deleting, or merging some products (as a result of migrating from one
 catalog data provider to another). If you specify one of these products in a request,
 the call may return the product with a warning, or it may fail with an error if the
 product has been deleted.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *productID;

/**
 
 If true, indicates that the item listing includes the stock photo. To use an
 eBay stock photo in an item listing, set IncludeStockPhotoURL to true. If a
 stock photo is available, it is used at the top of the View Item page and in
 the Item Specifics section of the listing. If you also include
 Item.PictureDetails.PictureURL, the stock photo only appears in the Item
 Specifics section of the listing. Other pictures you specify by using
 Item.PictureDetails.PictureURL appear in a separate section of the listing.
 If you use Item.ExternalProductID instead of Item.ProductListingDetails, eBay
 sets IncludeStockPhotoURL to true (and you cannot set it to false). In
 GetItem, the URL of the stock photo will be returned in StockPhotoURL. If you
 set IncludeStockPhotoURL to false, the stock photo does not appear in the
 listing at all.<br>
 <br>
 <span class="tablenote"><b>Note:</b>
 The following sites offer free Gallery: US (site ID 0), the Parts & Accessories
 Category on US Motors (site ID 100), CA (site ID 2), CAFR (site ID 210), ES (site ID
 186), FR (site ID 71), IT (site ID 101),and NL (site ID 146).
 <br><br>
 On these sites, eBay selects a Gallery thumbnail from image URLs included
 in the request (i.e. either GalleryURL or the first PictureURL), using
 selection rules that consider which of these URLs has been specified and
 whether an eBay stock photo exists for the item. Also, eBay selects an
 image regardless of whether you have specified either GalleryType or
 GalleryURL. A Gallery fee will only apply if you have set GalleryType to
 Plus or Featured (as basic Gallery is free).<br>
 <br>
 Along with these changes, IncludeStockPhotoURL will be used in the request.
 In some cases, if IncludeStockPhotoURL is set to false, no image will be
 generated for the Gallery. A common example of this occurrence is when only
 GalleryURL has been set in the request (i.e., no PictureURL elements are
 defined). In this case, eBay will not use a stock photo, even if it is
 available. See "Using Gallery Features on Sites with Free Gallery" in the
 eBay Web Services Guide for complete information.
 </span>
 <br><br>
 Not applicable to Half.com.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *includeStockPhotoURL;

/**
 
 If true, specifies that the listing should include additional information about the product,
 such as a publisher's description or film credits. Such information is hosted through the eBay site
 and cannot be edited. If true, Item.Description is optional in item-listing requests.
 <br><br>
 <b>For GetItem and related calls</b>:
 The eBay site shows the catalog product description in the
 product details section of a listing. You cannot download this
 pre-filled description text via the API.
 To retrieve a URL for the catalog product details page,
 see DetailsURL in GetProductSearchResults, GetProductFamilyMembers,
 or GetProductSellingPages. Or see DetailsURL in FindProducts in the
 Shopping API (which may be easier to use if your application doesn't
 support eBay Attributes).
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *includePrefilledItemInformation;

/**
 
 If true, indicates that the stock photo for an item (if available) is used as the
 gallery thumbnail. When listing an item, IncludeStockPhotoURL must also be true and
 Item.PictureDetails.GalleryType must be passed in with a value of Gallery or Gallery
 Featured (but not both). See the eBay Trading API guide for additional validation
 rules for pictures. <br>
 <br>
 <span class="tablenote"><b>Note:</b>
 The following sites offer free Gallery: US (site ID 0), the Parts & Accessories
 Category on US Motors (site ID 100), CA (site ID 2), CAFR (site ID 210), ES (site ID
 186), FR (site ID 71), IT (site ID 101),and NL (site ID 146).
 <br><br>
 On these sites, eBay selects a Gallery thumbnail from image URLs included
 in the request (i.e. either GalleryURL or the first PictureURL), using
 selection rules that consider which of these URLs has been specified and
 whether an eBay stock photo exists for the item. Also, eBay selects an
 image regardless of whether you have specified either GalleryType or
 GalleryURL. A Gallery fee will only apply if you have set GalleryType to
 Plus or Featured (as basic Gallery is free).<br>
 <br>
 Along with these changes, UseStockPhotoURLAsGallery will be used in the
 request. In some cases, if UseStockPhotoURLAsGallery is set to false, no
 image will be generated for the Gallery. A common example of this
 occurrence is when only GalleryURL has been set in the request (i.e., no
 PictureURL elements are defined). In this case, eBay will not use a stock
 photo, even if it is available. See "Using Gallery Features on Sites with
 Free Gallery" in the eBay Web Services Guide for complete information.
 </span>
 <br>
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *useStockPhotoURLAsGallery;

/**
 
 Fully qualified URL for a standard image (if any) that is associated with the product.
 A seller includes the stock photo in the listing
 by setting IncludeStockPhotoURL.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *stockPhotoURL;

/**
 
 Copyright statement indicating the source of the product information. This information will be
 included in the listing with Pre-filled Item Information. Your application should also display
 the copyright statement when rendering the Pre-filled Item Information.
 If more than one copyright statement is applicable, they can be presented to the
 user in alphabetical order. Returned as HTML.
 
 
 entry type : NSString, wrapper for primitive string
*/

@property (nonatomic, retain) NSMutableArray *copyright;

/**
 
 eBay's short global reference ID for a catalog product.
 On the eBay Web site, this is known as the "ePID" or "Product ID".
 This type of product ID is a fixed reference to a product
 (regardless of version).
 Multiple (versioned) ProductID values can be associated with a
 single product reference ID.
 You can find product reference IDs for products by using FindProducts in the Shopping API.
 You can also find the product ID on eBay's Web site
 (a numeric value prefixed with "EPID").
 You can pass the value with or without the "EPID" prefix;
 for example "EPID228742" or "228742" (without quotes).
 <br><br>
 If the primary and secondary categories are both catalog-enabled, this ID should
 correspond to the primary category (not the secondary category).
 <br><br>
 Some sites (such as eBay US, Germany, Austria, and Switzerland) are updating,
 replacing, deleting, or merging some products (as a result of migrating from one
 catalog data provider to another). If you specify one of these products in a request,
 the call may return the product with a warning, or it may return an error if the
 product has been deleted.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *productReferenceID;

/**
 
 Fully qualified URL for eBay's product details page, which contains
 optional information about the product
 (such as a movie's description or film credits). This information is
 hosted through the eBay Web site and it cannot be edited. Portions
 of the content are protected by copyright. Applications can include
 this URL as a link so that end users can view additional descriptive
 details about the product.<br>
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *detailsURL;

/**
 
 Fully qualified URL for eBay's product details page, which contains optional
 information about the product (such as a movie's description or film credits). This
 information is hosted through the eBay Web site and it cannot be edited. Portions of
 the content are protected by copyright. Applications can include this URL as a link so
 that end users can view additional descriptive details about the product.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *productDetailsURL;

/**
 
 Indicates what eBay should do if more than one product matches
 the external product ID (ISBN, UPC, EAN, BrandMPN, or
 TicketListingDetails). Also see UseFirstProduct as an alternative.<br>
 <br>
 If true and more than one
 match is found, the call fails and the response
 returns an error and all matching ProductID values.
 This lets you choose one of the ProductIDs to pass in instead.
 If false and more than one match is found, the call fails and the
 response includes an error but does not return the matching
 ProductID values. (This flag has no effect when only one match is
 found.)
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *returnSearchResultOnDuplicates;

/**
 
 Indicates what eBay should do if no product match has been found.
 If no product match was found and ListIfNoProduct is true, the
 item is listed without product information.
 (By default, eBay  attempts to list the item with product information.)<br>
 <br>
 <span class="tablenote"><b>Note:</b>
 If you omit PrimaryCategory and no product match is found,
 the listing will fail because eBay won't be able to determine
 a category without a product ID.
 </span>
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *listIfNoProduct;

/**
 
 A universal format for identifying products. GTIN is a unique
 8, 12, 13, or 14-digit identifier that some external catalogs use
 instead of ISBN, UPC, EAN, or other values.
 When you pass in GTIN, eBay attempts to map the value to an ISBN, UPC, or EAN. When you know that a value is an ISBN, UPC, or EAN,
 we recommend that you use those fields directly instead of GTIN,
 for better performance and accuracy.<br>
 <br>
 Only used to match catalog products when creating listings.
 (In some categories, eBay may also copy the ISBN, UPC, or EAN to the
 listing's item specifics. The GTIN is not stored.)
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *gtin;

/**
 
 
 ISBN is a unique identifer for books (an international standard).
 Specify a 10 or 13-character ISBN. If you specify the
 13-character ISBN, the value must begin with either 978 pr 979.
 If the primary and secondary categories are both catalog-enabled,
 this ID should correspond to the primary category
 (not the secondary category).<br>
 <br>
 Only used to match catalog products when creating listings.
 (In some categories, eBay may also copy the ISBN, UPC, or EAN to the
 listing's item specifics.)
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *isbn;

/**
 
 UPC is a unique, 12-character identifier that many industries use to identify products.
 <br><br>
 If the primary and secondary categories are both catalog-enabled, this ID should
 correspond to the primary category (not the secondary category).
 <br>
 <br>
 Only used to match catalog products when creating listings.
 (In some categories, eBay may also copy the ISBN, UPC, or EAN to the
 listing's item specifics.)
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *upc;

/**
 
 EAN is a unique 8 or 13 digit identifier that many industries
 (such as book publishers) use to identify products.
 If the primary and secondary categories are both catalog-enabled,
 this ID should correspond to the primary category
 (not the secondary category).<br>
 <br>
 Only used to match catalog products when creating listings.
 (In some categories, eBay may also copy the ISBN, UPC, or EAN to the
 listing's item specifics.)
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *ean;

/**
 
 The combination of Brand and MPN (manufacturer part number) can
 be used as a unique identifier for a product.
 Please specify both Brand and MPN to ensure a unique product match.<br>
 <br>
 Only used to match catalog products when creating listings
 (not for buy-side searching).
 
 
 type : class Trading_BrandMPNType
*/
@property (nonatomic, retain) Trading_BrandMPNType *brandMPN;

/**
 
 Only applicable when you are listing event tickets.
 Only used to match catalog products when creating listings
 (not for buy-side searching).
 
 
 type : class Trading_TicketListingDetailsType
*/
@property (nonatomic, retain) Trading_TicketListingDetailsType *ticketListingDetails;

/**
 
 Indicates what eBay
 should do if more than one product matches the external product ID (ISBN, UPC, EAN,
 BrandMPN, or TicketListingDetails). Also see ReturnSearchResultOnDuplicates as an
 alternative. If more than one product match was found and UseFirstProduct is true, item
 will be listed with first product information. If false, the rules for
 ReturnSearchResultOnDuplicates are used.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *useFirstProduct;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
