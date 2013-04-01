// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Trading_AddressType;
@class Trading_SellereBayPaymentProcessConsentCodeType;
@class Trading_TopRatedSellerDetailsType;
@class Trading_FeatureEligibilityType;
@class Trading_SchedulingInfoType;
@class Trading_CharityAffiliationDetailsType;
@class Trading_RecoupmentPolicyConsentType;
@class Trading_ProStoresCheckoutPreferenceType;
@class Trading_IntegratedMerchantCreditCardInfoType;

/**
 
 Information about a user returned in the context of an item's seller.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_SellerType : NSObject <PicoBindable> {

@private
    NSNumber *_paisaPayStatus;
    NSNumber *_allowPaymentEdit;
    NSString *_billingCurrency;
    NSNumber *_checkoutEnabled;
    NSNumber *_cipBankAccountStored;
    NSNumber *_goodStanding;
    NSString *_merchandizingPref;
    NSNumber *_qualifiesForB2BVAT;
    NSString *_sellerGuaranteeLevel;
    NSString *_sellerLevel;
    Trading_AddressType *_sellerPaymentAddress;
    Trading_SchedulingInfoType *_schedulingInfo;
    NSNumber *_storeOwner;
    NSString *_storeURL;
    NSString *_sellerBusinessType;
    NSNumber *_registeredBusinessSeller;
    NSString *_storeSite;
    NSString *_paymentMethod;
    Trading_ProStoresCheckoutPreferenceType *_proStoresPreference;
    NSNumber *_charityRegistered;
    NSNumber *_safePaymentExempt;
    NSNumber *_paisaPayEscrowEMIStatus;
    Trading_CharityAffiliationDetailsType *_charityAffiliationDetails;
    NSNumber *_transactionPercent;
    Trading_IntegratedMerchantCreditCardInfoType *_integratedMerchantCreditCardInfo;
    Trading_FeatureEligibilityType *_featureEligibility;
    NSNumber *_topRatedSeller;
    Trading_TopRatedSellerDetailsType *_topRatedSellerDetails;
    Trading_RecoupmentPolicyConsentType *_recoupmentPolicyConsent;
    NSNumber *_domesticRateTable;
    NSNumber *_internationalRateTable;
    NSString *_sellereBayPaymentProcessStatus;
    Trading_SellereBayPaymentProcessConsentCodeType *_sellereBayPaymentProcessConsent;
    NSMutableArray *_any;

}


/**
 
 Indicates the seller's PaisaPay and PaisapayEscrow registration status. India site only.<br>
 0 - Seller not registered<br>
 1 - Seller registered<br>
 2 - Seller registered but registration suspended<br>
 3 - Seller registered but outbound payment suspended<br>
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *paisaPayStatus;

/**
 
 Indicates whether the user as a seller by default allows buyers to edit the
 total cost of an item (while in checkout). (Sellers enable this property in
 their My eBay user preferences on the eBay site.)
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *allowPaymentEdit;

/**
 
 Currency type in which the user is billed seller fees.
 
 
 type: string constant in Trading_CurrencyCodeType.h
*/
@property (nonatomic, retain) NSString *billingCurrency;

/**
 
 This flag indicates whether or not the seller's Checkout Enabled preference is turned on (at account level or at
 listing level). This preference is managed through Payment Preferences in My eBay. If this preference is enabled,
 a Pay Now button will appear in checkout flow pages and in the email notifications that are sent to buyers. This
 preferance is enabled by default if PayPal is one of the payment methods.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *checkoutEnabled;

/**
 
 If true, this flag indicates that the seller has stored bank account information on file
 with eBay. A seller must have stored bank account information on file with eBay in order
 to use 'CashOnPickup' as a payment method (known as 'Pay upon Pickup' on the site). This
 field is applicable to all eBay sites that support 'CashOnPickup' as a payment method.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *cipBankAccountStored;

/**
 
 If true, indicates that the user is in good standing with eBay. (One of the
 requirements for listing a new item with Immediate Payment.)
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *goodStanding;

/**
 
 Indicates whether the seller participates in the
 Merchandising Manager feature. If so, the seller can
 set up rules for cross-promoting items from the seller's store.
 If not, eBay cross-promotes items as the seller's items are
 being viewed or purchased.
 
 
 type: string constant in Trading_MerchandizingPrefCodeType.h
*/
@property (nonatomic, retain) NSString *merchandizingPref;

/**
 
 Indicates whether the user is subject to VAT. Users who have registered with
 eBay as VAT-exempt are not subject to VAT.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *qualifiesForB2BVAT;

/**
 
 No longer supported.
 
 
 type: string constant in Trading_SellerGuaranteeLevelCodeType.h
*/
@property (nonatomic, retain) NSString *sellerGuaranteeLevel;

/**
 
 The user's eBay PowerSeller tier. Possible values are enumerated in the SellerLevelCodeType code list.
 SellerInfo.SellerLevel is no longer returned in the GetUser, GetBidderList, GetSellerList, GetItem, and
 GetItemTransactions responses for the US, DE/AT/CH, and UK/IE sites, for version 629 and later. If you are using
 a version older than 629, SellerInfo.SellerLevel will still be returned. Developers should note that
 SellerInfo.SellerLevel could potentially be removed from other sites as well.
 
 
 type: string constant in Trading_SellerLevelCodeType.h
*/
@property (nonatomic, retain) NSString *sellerLevel;

/**
 
 Address used by eBay for purposes of billing the user for seller fees.
 
 
 type : class Trading_AddressType
*/
@property (nonatomic, retain) Trading_AddressType *sellerPaymentAddress;

/**
 
 Container for scheduling limits for the user.
 Conveys the minimum and maximum
 minutes the user may schedule listings in advance, as well as the maximum
 number of items the user may schedule.
 
 
 type : class Trading_SchedulingInfoType
*/
@property (nonatomic, retain) Trading_SchedulingInfoType *schedulingInfo;

/**
 
 Boolean value indicates whether or not the seller is an eBay Store owner.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *storeOwner;

/**
 
 The URL for the seller's eBay Store. This field is only returned if the seller is a store
 owner. To determine if a seller is a Store owner, check for the <b>User.SellerInfo.StoreOwner</b>
 and a value of true. The eBay Stores domain that is returned in this field is based on the
 <b>SITEID</b> header that is passed in the request, and not on the user's
 registration address, as was the case prior to version 757. So, if the seller's
 registration county is the UK, but a <b>SITEID</b> value of 71 (France) is
 passed into the call, the eBay Stores domain that is returned would be stores.ebay.fr.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *storeURL;

/**
 
 Type of seller account. This value is returned if the German
 (ID 77), UK (ID 3), Ireland (ID 205), or eBay Motors (ID 100) sites are specified.
 
 
 type: string constant in Trading_SellerBusinessCodeType.h
*/
@property (nonatomic, retain) NSString *sellerBusinessType;

/**
 
 If true, the user is registered as a vehicle dealer on the eBay Motors site.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *registeredBusinessSeller;

/**
 
 The site associated with the seller's eBay Store.
 
 
 type: string constant in Trading_SiteCodeType.h
*/
@property (nonatomic, retain) NSString *storeSite;

/**
 
 Indicates the method the seller selected to pay eBay with for
 the account.
 The payment methods vary from one eBay site to the next.
 
 
 type: string constant in Trading_SellerPaymentMethodCodeType.h
*/
@property (nonatomic, retain) NSString *paymentMethod;

/**
 
 Details about the checkout preferences related to the ProStores store. Returned
 only if set by the user. (Currently those preferences are not settable using the public API.)
 
 
 type : class Trading_ProStoresCheckoutPreferenceType
*/
@property (nonatomic, retain) Trading_ProStoresCheckoutPreferenceType *proStoresPreference;

/**
 
 Indicates whether or not the seller is a registered charity
 seller. If CharityRegistered is false, the user must
 register with the eBay Giving Works provider to list items
 with eBay Giving Works.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *charityRegistered;

/**
 
 If true, the user is currently exempt from the requirement to offer at least
 one safe payment method (PayPal/PaisaPay or one of the credit cards specified
 in Item.PaymentMethods) when listing items. This value should only return true
 for sellers who registered before January 17, 2007. Otherwise, it should
 return false. This setting overrides both the site and category values for
 SafePaymentRequired.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *safePaymentExempt;

/**
 
 Indicates the seller's PaisaPayEscrowEMI (Equal Monthly Installment) registration status. India site only.<br>
 0 - Seller not registered<br>
 1 - Seller registered<br>
 7 - Seller eligible<br>
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *paisaPayEscrowEMIStatus;

/**
 
 Contains information about the seller's charity affiliations detail.
 Returned if the user is affiliated with one or more
 charities. Seller must be registered with the eBay Giving
 Works provider to be affiliated with a charity non-profit
 organization.
 
 
 type : class Trading_CharityAffiliationDetailsType
*/
@property (nonatomic, retain) Trading_CharityAffiliationDetailsType *charityAffiliationDetails;

/**
 
 Percentage of the number of times a member has sold successfully vs.
 the number of times a member has bought an item in the preceding 365 days.
 
 
 type : NSNumber, wrapper for primitive float
*/
@property (nonatomic, retain) NSNumber *transactionPercent;

/**
 
 Indicates the sites on which a seller has a payment gateway account
 (and thus the sites on which the seller can use the IntegratedMerchantCreditCard
 payment method).
 Sellers use a payment gateway account to accept online
 credit cards.
 
 
 type : class Trading_IntegratedMerchantCreditCardInfoType
*/
@property (nonatomic, retain) Trading_IntegratedMerchantCreditCardInfoType *integratedMerchantCreditCardInfo;

/**
 
 Contains eligibility details about seller- or platform-based features. This is returned only
 if IncludeFeatureEligibility is set to true in the request.
 
 
 type : class Trading_FeatureEligibilityType
*/
@property (nonatomic, retain) Trading_FeatureEligibilityType *featureEligibility;

/**
 
 This boolean field indicates if the seller is certified as a
 <em>Top Rated Seller</em>. To qualify as a Top Rated Seller, a
 seller must meet the following requirements:
 <ul>
 <li>100 or more selling transactions in a one-year period</li>
 <li>Shipment tracking information provided to the buyer within the
 specified handling time for at least 90 percent of their listings</li>
 </ul>
 This field is returned for the following sites only: US (EBAY-US), Motors (EBAY-MOTOR), AT (EBAY-AT), CH (EBAY-CH), DE (EBAY-DE), IE (EBAY-IE) and UK (EBAY-GB).
 <br/><br/>
 On the eBay US site, Top Rated Sellers are eligible to receive a Top Rated Plus seal for their listings. For a Top Rated Seller's listing to qualify as a Top Rated Plus listing, that listing must accept returns and the handling time must be set to one day (<strong>DispatchTimeMax</strong>=<code>1</code>). Top Rated Plus listings get increased visibility in fixed-price searches and receive a Final Value Fee discount.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *topRatedSeller;

/**
 
 Contains top-rated seller program details for the seller.
 
 
 type : class Trading_TopRatedSellerDetailsType
*/
@property (nonatomic, retain) Trading_TopRatedSellerDetailsType *topRatedSellerDetails;

/**
 
 The list of the sites where a seller has agreed to the cross-border recoupment terms.
 <br><br>
 Sellers who engage in cross-border trade on sites that require a recoupment agreement, must
 agree to the recoupment terms before adding items to the site. This agreement allows eBay to
 reimburse a buyer during a dispute and then recoup the cost from the seller.
 
 
 type : class Trading_RecoupmentPolicyConsentType
*/
@property (nonatomic, retain) Trading_RecoupmentPolicyConsentType *recoupmentPolicyConsent;

/**
 
 If true, the seller has configured a domestic shipping rate table on the DE, UK or US website.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *domesticRateTable;

/**
 
 If true, the seller has configured an international shipping rate table on the DE or UK website.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *internationalRateTable;

/**
 
 This enumeration value indicates the current status of a DE or AT seller's account related to the new
 eBay payment process.
 <br><br>
 'AcceptedUA' is returned if the DE or AT seller has accepted the supplemental user agreement for the new
 eBay payment process, but that same seller's account is not yet ramped up in the new eBay payment
 process.
 <br><br>
 'eBayPaymentProcessEnabled' is returned if the DE or AT seller has accepted the supplemental user
 agreement for the new eBay payment process, and that same seller's account is ramped up in the new eBay
 payment process.
 <br><br>
 'MustAcceptUA' is returned if the DE or AT seller has not accepted the supplemental user agreement for
 the new eBay payment process. If this is the case, the seller can find the URL to the supplemental user
 agreement in the <b>SellereBayPaymentProcessConsent.UserAgreementInfo.UserAgreementURL</b>
 field.
 
 
 type: string constant in Trading_SellereBayPaymentProcessStatusCodeType.h
*/
@property (nonatomic, retain) NSString *sellereBayPaymentProcessStatus;

/**
 
 This container is returned to all DE and AT sellers and consists of details of the seller's account status
 regarding the new eBay payment process. This information includes the seller's payout preferences and
 whether or not the seller has accepted the supplemental user agreement for the new eBay payment process.
 
 
 type : class Trading_SellereBayPaymentProcessConsentCodeType
*/
@property (nonatomic, retain) Trading_SellereBayPaymentProcessConsentCodeType *sellereBayPaymentProcessConsent;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
