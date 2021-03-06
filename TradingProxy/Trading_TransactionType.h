// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Trading_UnpaidItemType;
@class Trading_RefundArrayType;
@class Trading_ListingCheckoutRedirectPreferenceType;
@class Trading_MultiLegShippingDetailsType;
@class Trading_FeedbackInfoType;
@class Trading_SellerDiscountsType;
@class Trading_ExternalTransactionType;
@class Trading_VariationType;
@class Trading_SellingManagerProductDetailsType;
@class Trading_ShippingServiceOptionsType;
@class Trading_AmountType;
@class Trading_ItemType;
@class Trading_ShippingDetailsType;
@class Trading_PaymentHoldDetailType;
@class Trading_UserType;
@class Trading_OrderType;
@class Trading_TaxesType;
@class Trading_TransactionStatusType;

/**
 
 This type defines the Transaction container, which consists of detailed information
 about a single line item in an order. The eBay system creates an order line item
 when a buyer has committed to make a purchase in an auction or fixed-price listing.
 A multiple-quantity, fixed-priced listing can spawn one or more order line items.
 Auction listings and single-quantity, fixed-price listings can only spawn one order
 line item.
 
 <br>
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_TransactionType : NSObject <PicoBindable> {

@private
    Trading_AmountType *_amountPaid;
    Trading_AmountType *_adjustmentAmount;
    Trading_AmountType *_convertedAdjustmentAmount;
    Trading_UserType *_buyer;
    Trading_ShippingDetailsType *_shippingDetails;
    Trading_AmountType *_convertedAmountPaid;
    Trading_AmountType *_convertedTransactionPrice;
    NSDate *_createdDate;
    NSString *_depositType;
    Trading_ItemType *_item;
    NSNumber *_quantityPurchased;
    Trading_TransactionStatusType *_status;
    NSString *_transactionID;
    Trading_AmountType *_transactionPrice;
    NSNumber *_bestOfferSale;
    NSNumber *_vatPercent;
    NSMutableArray *_externalTransaction;
    Trading_SellingManagerProductDetailsType *_sellingManagerProductDetails;
    Trading_ShippingServiceOptionsType *_shippingServiceSelected;
    NSString *_buyerMessage;
    Trading_AmountType *_dutchAuctionBid;
    NSString *_buyerPaidStatus;
    NSString *_sellerPaidStatus;
    NSDate *_paidTime;
    NSDate *_shippedTime;
    Trading_AmountType *_totalPrice;
    Trading_FeedbackInfoType *_feedbackLeft;
    Trading_FeedbackInfoType *_feedbackReceived;
    Trading_OrderType *_containingOrder;
    Trading_AmountType *_finalValueFee;
    Trading_ListingCheckoutRedirectPreferenceType *_listingCheckoutRedirectPreference;
    Trading_RefundArrayType *_refundArray;
    NSString *_transactionSiteID;
    NSString *_platform;
    NSString *_cartID;
    NSNumber *_sellerContactBuyerByEmail;
    NSString *_payPalEmailAddress;
    NSString *_paisaPayID;
    Trading_AmountType *_buyerGuaranteePrice;
    Trading_VariationType *_variation;
    NSString *_buyerCheckoutMessage;
    Trading_AmountType *_totalTransactionPrice;
    Trading_TaxesType *_taxes;
    NSNumber *_bundlePurchase;
    Trading_AmountType *_actualShippingCost;
    Trading_AmountType *_actualHandlingCost;
    NSString *_orderLineItemID;
    Trading_PaymentHoldDetailType *_paymentHoldDetails;
    Trading_SellerDiscountsType *_sellerDiscounts;
    Trading_AmountType *_refundAmount;
    NSString *_refundStatus;
    NSString *_codiceFiscale;
    NSNumber *_isMultiLegShipping;
    Trading_MultiLegShippingDetailsType *_multiLegShippingDetails;
    NSDate *_invoiceSentTime;
    Trading_UnpaidItemType *_unpaidItem;
    NSNumber *_intangibleItem;
    NSMutableArray *_any;

}


/**
 
 This value indicates the total amount of the line item. This amount includes
 the sale price, shipping and handling charges, shipping
 insurance (if offered and selected by the buyer), additional services, and any
 applied sales tax. This value is returned after the buyer has completed
 checkout (the <b>CheckoutStatus.Status</b> output field reads "Complete"). If the
 seller allowed the buyer to change the total for an order, the buyer is
 able to change the total up until the time when checkout status is
 Complete. Determine whether the buyer changed the amount by retrieving the
 order line item data and comparing the <b>AmountPaid</b> value to
 what the seller expected. If multiple order line items
 between the same buyer and seller have been combined into a Combined
 Payment order, the <b>AmountPaid</b> value returned in <b>GetSellerTransactions</b> and
 <b>GetItemTransactions</b> reflects the amount paid for the Combined Payment order
 and not the individual order line item. You can determine the
 order line items that belong to the same Combined Payment order by checking
 to see if the <b>ContainingOrder.OrderID</b> value is the same. For Motors items,
 <b>AmountPaid</b> is the amount paid by the buyer for the deposit.<br/>
 <br />
 Not applicable to Half.com.
 
 
 type : class Trading_AmountType
*/
@property (nonatomic, retain) Trading_AmountType *amountPaid;

/**
 
 This value indicates the dollar amount by which the buyer has adjusted the
 order total. Adjustments to order costs may include shipping and handling,
 shipping insurance, buyer discounts, or added services. A positive amount
 indicates the amount is an extra charge being paid to the seller by the buyer.
 A negative value indicates this amount is a credit given to the buyer by the
 seller.
 <br><br>
 Not applicable to Half.com.
 
 
 type : class Trading_AmountType
*/
@property (nonatomic, retain) Trading_AmountType *adjustmentAmount;

/**
 
 This value indicates the converted value of <b>AdjustmentAmount</b> in the currency of the site that
 returned the response. Refresh this value every 24 hours to pick up the
 current conversion rates.
 <br />
 <br />
 Not applicable to Half.com.
 
 
 type : class Trading_AmountType
*/
@property (nonatomic, retain) Trading_AmountType *convertedAdjustmentAmount;

/**
 
 UserType container consisting of eBay user data for the buyer. See
 <b>UserType</b> for its child elements. Returned by
 <b>GetItemsAwaitingFeedback</b> if the seller is making the request.
 <br><br>
 Applicable to Half.com (for <b>GetOrders</b> only).
 
 
 type : class Trading_UserType
*/
@property (nonatomic, retain) Trading_UserType *buyer;

/**
 
 Container consisting of shipping-related details for an order. Shipping
 details include shipping rates, package dimensions, handling costs,
 excluded shipping locations (if specified), shipping service options,
 shipping insurance information, sales tax information (if applicable), and
 shipment tracking details (if shipped).
 <br><br>
 For <b>GetSellerTransactions</b> and <b>GetItemTransactions</b>, the <b>ShippingDetails</b>
 container is returned in the <b>Transaction</b> container. For <b>GetOrders</b> and
 <b>GetOrderTransactions</b>, the <b>ShippingDetails</b> container is returned at the
 Order level.
 <br><br>
 Applicable to Half.com (for <b>GetOrders</b> only).
 
 
 type : class Trading_ShippingDetailsType
*/
@property (nonatomic, retain) Trading_ShippingDetailsType *shippingDetails;

/**
 
 This value indicates the converted value of <b>AmountPaid</b> in the currency of the site that returned the
 response. Refresh this value every 24 hours to pick up the current
 conversion rates.
 <br><br>
 Not applicable to Half.com.
 
 
 type : class Trading_AmountType
*/
@property (nonatomic, retain) Trading_AmountType *convertedAmountPaid;

/**
 
 This value indicates the converted value of <b>TransactionPrice</b> in the currency of the site that
 returned the response. Refresh this value every 24 hours to pick up the
 current conversion rates.
 <br><br>
 Not applicable to Half.com.
 
 
 type : class Trading_AmountType
*/
@property (nonatomic, retain) Trading_AmountType *convertedTransactionPrice;

/**
 
 Indicates the creation time of the order line item. For
 auction listings, an order line item is created when that
 listing ends with a high bidder whose bid meets or exceeds the Reserve
 Price (if set). For a fixed-price listing or a Buy It Now auction listing,
 an order line item is created once the buyer clicks the Buy
 button.
 <br><br>
 Applicable to Half.com (for <b>GetOrders</b> only).
 
 
 type : NSDate, wrapper for primitive date
*/
@property (nonatomic, retain) NSDate *createdDate;

/**
 
 This value indicates whether or not the seller requires a deposit for the
 vehicle. This field is only applicable to US eBay Motors Vehicle listings.
 Otherwise, this field is returned as an empty value.
 <br><br>
 Not applicable to Half.com.
 
 
 type: string constant in Trading_DepositTypeCodeType.h
*/
@property (nonatomic, retain) NSString *depositType;

/**
 
 Container consisting of details about an item in a listing. The child
 fields returned are dependent on the call, the type of item or listing, and
 the listing site.
 <br><br>
 Applicable to Half.com (for <b>GetOrders</b>).
 
 
 type : class Trading_ItemType
*/
@property (nonatomic, retain) Trading_ItemType *item;

/**
 
 This value indicates the number of identical items purchased at the same
 time by the same buyer from one listing. For auction listings, this value
 is always 1. For fixed-price, non-variation listings, this value can be
 greater than 1. In either case, this field is tied to the same order line
 item.
 <br><br>
 Applicable to Half.com (for <b>GetOrders</b>).
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *quantityPurchased;

/**
 
 Container consisting of status details of an order line item,
 including payment information. Several of these fields change values during
 the checkout flow. See <b>TransactionStatusType</b> for its child elements.
 <br><br>
 For <b>GetOrders</b>, only the <b>
 IntegratedMerchantCreditCardEnabled</b> and
 <b>PaymentMethodUsed</b> child elements are returned.
 The <b>PaymentHoldStatus</b> container will be returned for those sellers subject to the new eBay payment process.  The fields indicating the status of the order are
 actually found in the <b>OrderArray.Order.CheckoutStatus</b>
 container. <br><br>
 Not applicable to Half.com.
 
 
 type : class Trading_TransactionStatusType
*/
@property (nonatomic, retain) Trading_TransactionStatusType *status;

/**
 
 Unique identifier for an eBay order line item. An order line
 item is created once there is a commitment from a buyer to
 purchase an item. Since an auction listing can only have one order line
 item during the duration of the listing, the <b>TransactionID</b>
 for auction listings is always 0. Along with its corresponding <b>ItemID</b>, a
 <b>TransactionID</b> is used and referenced during an order checkout flow and
 after checkout has been completed.
 <br><br>
 Applicable to Half.com (for <b>GetOrders</b> only).
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *transactionID;

/**
 
 The price of one order line item.
 <br><br>
 This price is returned only for Best Offer items. This amount does not take into account shipping, sales tax, and other costs related to the order line item. If multiple units were purchased through Best Offer, this value is the per-unit price.
 <br><br>
                   For eBay Motors Vehicle listings, <b>TransactionPrice</b> is the deposit amount.
 <br><br>
 Applicable to Half.com (for <b>GetOrders</b>).
 
 
 type : class Trading_AmountType
*/
@property (nonatomic, retain) Trading_AmountType *transactionPrice;

/**
 
 Indicates whether or not the order line item was created
 as the result of the seller accepting a Best Offer from a buyer.
 <br><br>
 Not applicable to Half.com.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *bestOfferSale;

/**
 
 VAT rate for the item. When the <b>VATPercent</b> is specified, the item's VAT
 information appears on the item's listing page. In addition, the seller
 can choose to print an invoice that includes the item's net price, VAT
 percent, VAT amount, and total price. Since VAT rates vary depending on the
 item and on the user's country of residence, a seller is responsible for
 entering the correct VAT rate; it is not calculated by eBay. To specify a
 <b>VATPercent</b>, a seller must have a VAT-ID registered with eBay and must be
 listing the item on a VAT-enabled site. Max precision 3 decimal places. Max
 length 5 characters. Note: The View Item page displays the precision to 2
 decimal places with no trailing zeros. However, the full value you send in is
 stored.
 <br><br>
 Not applicable to Half.com.
 
 
 type : NSNumber, wrapper for primitive double
*/
@property (nonatomic, retain) NSNumber *vatPercent;

/**
 
 Container consisting of details for the electronic payment of an eBay order line item. PayPal transactions may include a buyer payment or refund, or a fee or credit applied to the seller's account. This field is only returned after payment for the order line item has occurred. For orders in which the seller's funds are being held by PayPal,
 the <b>PaymentHoldDetails</b> container and <b>PaymentHoldStatus</b> field will be returned instead of the <b>ExternalTransaction</b> container.
 <br><br>
 Not applicable to Half.com.
 
 
 entry type : class Trading_ExternalTransactionType
*/

@property (nonatomic, retain) NSMutableArray *externalTransaction;

/**
 
 This container consists of Selling Manager product details and is only
 returned if the item was listed through Selling Manager.
 <br><br>
 Not applicable to Half.com.
 
 
 type : class Trading_SellingManagerProductDetailsType
*/
@property (nonatomic, retain) Trading_SellingManagerProductDetailsType *sellingManagerProductDetails;

/**
 
 Container consisting of details about the domestic or international shipping
 service selected by the buyer.
       <br/><br/>
                   <span class="tablenote">
                   <strong>Note:</strong> For GetItemTransactions and GetSellerTransactions, this container does not return accurate shipping service and cost information for multiple line item orders. Use GetOrders instead, and provide the order's combined <strong>OrderID</strong> to retrieve this information.
                   </span>
 <br><br>
 Not applicable to Half.com.
 
 
 type : class Trading_ShippingServiceOptionsType
*/
@property (nonatomic, retain) Trading_ShippingServiceOptionsType *shippingServiceSelected;

/**
 
 Display message from buyer. This field holds transient data that is only
 being returned in Checkout related notifications.
 <br><br>
 Not applicable to Half.com.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *buyerMessage;

/**
 
 Dutch auctions are deprecated.
 
 
 type : class Trading_AmountType
*/
@property (nonatomic, retain) Trading_AmountType *dutchAuctionBid;

/**
 
 This value indicates the payment status of an order. This field is only returned for items that have actually
 been purchased (fixed-price or Buy It Now) or won (auction listings) and not auction listings that have just
 been bid on.
 <br><br>
 Not applicable to Half.com.
 
 
 type: string constant in Trading_PaidStatusCodeType.h
*/
@property (nonatomic, retain) NSString *buyerPaidStatus;

/**
 
 Specifies the paid status of the order.
 <br><br>
 Not applicable to Half.com.
 
 
 type: string constant in Trading_PaidStatusCodeType.h
*/
@property (nonatomic, retain) NSString *sellerPaidStatus;

/**
 
 Indicates the time when the order was marked paid. This value will only be
 visible to the user on either side of the order. An order can be marked as
 paid in the following ways:
 <ul>
 <li>Automatically when a payment is made via PayPal </li>
 <li>Seller marks the item as paid in My eBay or through Selling Manager Pro </li>
 <li>Programmatically by the seller through the <b>ReviseCheckoutStatus</b> or <b>CompleteSale</b> calls.</li>
 </ul>
 <br><br>
 Not applicable to Half.com.
 
 
 type : NSDate, wrapper for primitive date
*/
@property (nonatomic, retain) NSDate *paidTime;

/**
 
 Indicates the time when the item(s) associated with the order were marked
 as shipped. This value will only be visible to the user on either side of
 the order. An order can be marked as shipped in My eBay or through Selling
 Manager Pro, or programmatically by the seller through the <b>CompleteSale</b>
 call.
 <br><br>
 Applicable to Half.com (for <b>GetOrders</b> only).
 
 
 type : NSDate, wrapper for primitive date
*/
@property (nonatomic, retain) NSDate *shippedTime;

/**
 
 This field indicates the total price for an order line item.
 <br><br>
 For <strong>GetMyeBaySelling</strong>, with Global Shipping Program orders, the value of this field depends on order status and the number of transactions in the order. For orders awaiting payment, the field contains the purchase price of the order line item; for paid orders, it contains the purchase price of the order line item plus the cost of domestic shipping to the international shipping provider's warehouse. With single-transaction orders, this field is returned under the <strong>OrderTransaction.Transaction</strong> container; with multiple-transaction orders, it's returned under the <strong>OrderTransaction.Order.TransactionArray.Transaction</strong> container.
 <br><br>
 Not applicable to Half.com.
 
 
 type : class Trading_AmountType
*/
@property (nonatomic, retain) Trading_AmountType *totalPrice;

/**
 
 This container consists of Feedback left by the caller for their order
 partner. This container is only returned if the order is complete and
 feedback on the order line item has been left by the caller.
 <br><br>
 Not applicable to Half.com.
 
 
 type : class Trading_FeedbackInfoType
*/
@property (nonatomic, retain) Trading_FeedbackInfoType *feedbackLeft;

/**
 
 This container consists of Feedback received by the caller from their
 order partner. This container is only returned if the order is complete and
 feedback on the order line item has been received by the
 caller.
 <br><br>
 Not applicable to Half.com.
 
 
 type : class Trading_FeedbackInfoType
*/
@property (nonatomic, retain) Trading_FeedbackInfoType *feedbackReceived;

/**
 
 The Combined Payment order to which the order line item
 belongs. This container is only returned if <b>IncludeContainingOrder</b> is
 included and set to true in a <b>GetItemTransactions</b> or <b>GetSellerTransactions</b>
 request.
 <br><br>
 Not applicable to Half.com.
 
 
 type : class Trading_OrderType
*/
@property (nonatomic, retain) Trading_OrderType *containingOrder;

/**
 
 A Final Value Fee is calculated and charged to a seller's account
 immediately upon creation of an order line item. Note that this fee is created
 before the buyer makes a payment.The Final Value Fee for each order line
 item is returned by <b>GetSellerTransactions</b>, <b>GetItemTransactions</b>, <b>GetOrders</b>,
 and <b>GetOrderTransactions</b>, regardless of the checkout status.
 <br><br>
 If a seller requests a Final Value Fee credit, the value of
 <b>Transaction.FinalValueFee</b> will not change if a credit is
 issued. The credit only appears in the seller's account data.
 
 <br><br>
 Not applicable to Half.com.
 
 
 type : class Trading_AmountType
*/
@property (nonatomic, retain) Trading_AmountType *finalValueFee;

/**
 
 ProStores listing level preferences regarding the store to which
 checkout should be redirected for the listing if <b>Item.ThirdPartyCheckout</b>
 is true.
 
 
 type : class Trading_ListingCheckoutRedirectPreferenceType
*/
@property (nonatomic, retain) Trading_ListingCheckoutRedirectPreferenceType *listingCheckoutRedirectPreference;

/**
 
 Container consisting of one or more refund transactions to Half.com buyers.
 Container consisting of one or more refund transactions for eBay's new payment process.
 This container is only returned if a refund to a Half.com buyer has occurred or an refund was issued through eBay's new payment process
 
 
 type : class Trading_RefundArrayType
*/
@property (nonatomic, retain) Trading_RefundArrayType *refundArray;

/**
 
 The site upon which the order line item (transaction) was created.
 
 
 type: string constant in Trading_SiteCodeType.h
*/
@property (nonatomic, retain) NSString *transactionSiteID;

/**
 
 Name of the eBay co-branded site upon which the order line item
 (transaction) was created.
 
 
 type: string constant in Trading_TransactionPlatformCodeType.h
*/
@property (nonatomic, retain) NSString *platform;

/**
 
 Unique identifier for an instance of Shopping.com shopping cart. This field is only
 returned for Shopping.com order line items (transactions).
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *cartID;

/**
 
 Indicates whether the buyer has opted to accept emails from all the selling
 partners on Shopping.com. This field is only returned for order line items
 purchased through the Shopping.com shopping cart.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *sellerContactBuyerByEmail;

/**
 
 The seller's Paypal email address. This value is only revealed if it is the
 seller making the call.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *payPalEmailAddress;

/**
 
 Unique identifier for a PaisaPay transaction. Only applicable for the India
 site (203) if PaisaPay was the payment method used.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *paisaPayID;

/**
 
 For the Australia site, <b>BuyerGuaranteePrice</b> is the PayPal Buyer Protection coverage,
 offered for the item at the time of purchase. Details of coverage are in the
 following sections of the View Item page: the Buy Safely section and the Payment
 Details section.
 
 
 type : class Trading_AmountType
*/
@property (nonatomic, retain) Trading_AmountType *buyerGuaranteePrice;

/**
 
  In a fixed-priced listing, a seller can offer variations of the same item.
  For example, the seller could create a fixed-priced listing for a t-shirt
  design and offer the shirt in different colors and sizes. In this case, each
  color and size combination is a separate variation. Each variation can have
  a different quantity and price. Due to the possible price differentiation,
  buyers can buy multiple items from this listing at the same time, but all of
  the items must be of the same variation. One order line item is created
  whether one or multiple items of the same variation are purchased.
  <br><br>
  The <b>Variation</b> node contains information about which variation
  was purchased. Therefore, applications that process orders
  should always check to see if this node is present.
 
 
 type : class Trading_VariationType
*/
@property (nonatomic, retain) Trading_VariationType *variation;

/**
 
 This field is returned if a buyer left a comment for the seller during the
 left by buyer during the checkout flow.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *buyerCheckoutMessage;

/**
 
 The price of one order line item. This amount does not take into account shipping, sales tax, and other costs related to the order line item.
                   <br/><br/>
                   If multiple units were purchased through a non-variation, fixed-price listing, this value is the total combined price for all units of the order line item. With GetMyeBaySelling, you can also get this value by multiplying <strong>SellingStatus.QuantitySold</strong> by <strong>SellingStatus.CurrentPrice</strong>.
                   <br/><br/>
                   For eBay Motors Vehicle listings, <strong>TotalTransactionPrice</strong> is the deposit amount.
                   <br/><br/>
                   Applicable to Half.com (for GetOrders).
 
 
 type : class Trading_AmountType
*/
@property (nonatomic, retain) Trading_AmountType *totalTransactionPrice;

/**
 
 
 type : class Trading_TaxesType
*/
@property (nonatomic, retain) Trading_TaxesType *taxes;

/**
 
 Boolean value indicating whether or not an order line item is
 part of a bundle purchase using Product Configurator.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *bundlePurchase;

/**
 
 The shipping cost charged to the buyer for the order line item.
 <br/><br/>
 For <strong>GetOrders</strong>, this field is returned only after checkout is completed on the order. A value of <code>0.00</code> indicates free shipping.
 <br/><br/>
 For other calls, this field is always returned but defaults to <code>0.00</code> until payment has been made on the order.
 <br/><br/>
 <span class="tablenote">
                   <strong>Note:</strong> This is different from the field of the same name returned by <strong>GetSellingManagerSaleRecord</strong> and <strong>ReviseSellingManagerSaleRecord</strong>, which contains the actual shipping cost paid by the seller.
                   </span>
 
 
 type : class Trading_AmountType
*/
@property (nonatomic, retain) Trading_AmountType *actualShippingCost;

/**
 
 The handling cost for the order line item. The value of this field is
 returned as zero dollars if the seller did not specify a handling cost for
 the listing. It also will show as 0.00 dollars until payment has been made
 on the order.
 
 
 type : class Trading_AmountType
*/
@property (nonatomic, retain) Trading_AmountType *actualHandlingCost;

/**
 
 A unique identifier for an eBay order line item. This field is created as
 soon as there is a commitment to buy from the seller, and its value is
 based upon the concatenation of <b>ItemID</b> and <b>TransactionID</b>, with a hyphen in
 between these two IDs.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *orderLineItemID;

/**
 
 This container consists of information related to the payment hold on the
 order line item, including the reason why the buyer's payment for the
 order line item is being held, the expected release date of the funds into
 the seller's account, and possible action(s) the seller can take to
 expedite the payout of funds into their account. This container is only
 returned if PayPal has placed a payment hold on the order line item.
 <br><br>
 An American seller (selling on US or US Motors sites) and a Canadian
 seller (selling on CA and CA- FR sites) may be subject to PayPal payment
 holds (that last from three to 21 days) if that seller is new to selling
 on eBay or is classified as a "Below Standard" seller. For other reasons
 why a seller's funds may be held by PayPal, see the
 <b>PaymentHoldReason</b> field.
 
 
 type : class Trading_PaymentHoldDetailType
*/
@property (nonatomic, retain) Trading_PaymentHoldDetailType *paymentHoldDetails;

/**
 
 Seller Discounts
 
 
 type : class Trading_SellerDiscountsType
*/
@property (nonatomic, retain) Trading_SellerDiscountsType *sellerDiscounts;

/**
 
 Partial or Full refund amount from seller to the buyer
 
 
 type : class Trading_AmountType
*/
@property (nonatomic, retain) Trading_AmountType *refundAmount;

/**
 
 Refund Status Notification to Seller (Success, Failure, Pending)
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *refundStatus;

/**
 
 This field is returned if the <b>IncludeCodiceFiscale</b> flag is
 included in the request and set to 'true', and if the buyer has provided this value
 at checkout time.
 <br/><br/>
 This field is only applicable to Italian sellers. The Codice Fiscale number is
 unique for each Italian citizen and is used for tax purposes.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *codiceFiscale;

/**
 
 If <strong>IsMultilegShipping</strong> is true, the order or transaction uses the Global Shipping Program, in which the shipment has a domestic leg and an international leg. The buyer's shipping address is in a country other than the country where the items were listed, and the Get family of calls will return <code>InternationalPriorityShipping</code> as the default international shipping service in the listings of all the items in the order.
 <br/><br/>
 If <strong>IsMultilegShipping</strong> is false, the order or transaction does not use the Global Shipping Program. The shipment might use a different international shipping service, or it might be domestic.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *isMultiLegShipping;

/**
 
 Contains details about the domestic leg of a Global Shipping Program shipment.
 <br/><br/>
 This information is not returned if <strong>IsMultilegShipping</strong> is false.
 
 
 type : class Trading_MultiLegShippingDetailsType
*/
@property (nonatomic, retain) Trading_MultiLegShippingDetailsType *multiLegShippingDetails;

/**
 
 This field indicates the date/time that an order invoice was sent from the seller
 to the buyer. This field is only returned if an invoice (containing the order
 line item) was sent to the buyer.
 
 
 type : NSDate, wrapper for primitive date
*/
@property (nonatomic, retain) NSDate *invoiceSentTime;

/**
 
 Container consisting of details related to the type and status of an Unpaid
 Item case. This container is only returned if there is an open or closed
 Unpaid Item case associated with the order line item.
 
 
 type : class Trading_UnpaidItemType
*/
@property (nonatomic, retain) Trading_UnpaidItemType *unpaidItem;

/**
 
   This flag indicates whether or not the order line item is an
 intangible good such as an MP3 track or a mobile phone ringtone. Intangible items
 are not eligible for PayPal's Seller Protection program, so the seller will not be
 able to open an Unpaid Item case against the buyer.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *intangibleItem;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
