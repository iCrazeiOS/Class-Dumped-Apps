//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString;

@interface BuyflowPurchaseContext : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool contactNumberRequired; // @dynamic contactNumberRequired;
@property(nonatomic) _Bool disableTemplateMatch; // @dynamic disableTemplateMatch;
@property(nonatomic) _Bool hasContactNumberRequired; // @dynamic hasContactNumberRequired;
@property(nonatomic) _Bool hasDisableTemplateMatch; // @dynamic hasDisableTemplateMatch;
@property(nonatomic) _Bool hasInitializeIntent; // @dynamic hasInitializeIntent;
@property(nonatomic) _Bool hasIsPreauthorized; // @dynamic hasIsPreauthorized;
@property(nonatomic) _Bool hasIsTestMode; // @dynamic hasIsTestMode;
@property(nonatomic) _Bool hasPaymentRequestMerchantOrigin; // @dynamic hasPaymentRequestMerchantOrigin;
@property(nonatomic) _Bool hasPaymentRequestParameters; // @dynamic hasPaymentRequestParameters;
@property(nonatomic) _Bool hasSelectedAddressToken; // @dynamic hasSelectedAddressToken;
@property(nonatomic) _Bool hasSelectedClientInstrumentId; // @dynamic hasSelectedClientInstrumentId;
@property(nonatomic) _Bool hasShippingRequired; // @dynamic hasShippingRequired;
@property(nonatomic) _Bool hasSupportPayWithGoogleTheme; // @dynamic hasSupportPayWithGoogleTheme;
@property(nonatomic) _Bool hasUseGooglePayBrand; // @dynamic hasUseGooglePayBrand;
@property(nonatomic) _Bool hasUseTemplateRequirementsScheme; // @dynamic hasUseTemplateRequirementsScheme;
@property(nonatomic) int initializeIntent; // @dynamic initializeIntent;
@property(nonatomic) _Bool isPreauthorized; // @dynamic isPreauthorized;
@property(nonatomic) _Bool isTestMode; // @dynamic isTestMode;
@property(copy, nonatomic) NSString *paymentRequestMerchantOrigin; // @dynamic paymentRequestMerchantOrigin;
@property(copy, nonatomic) NSString *paymentRequestParameters; // @dynamic paymentRequestParameters;
@property(copy, nonatomic) NSData *selectedAddressToken; // @dynamic selectedAddressToken;
@property(copy, nonatomic) NSString *selectedClientInstrumentId; // @dynamic selectedClientInstrumentId;
@property(nonatomic) _Bool shippingRequired; // @dynamic shippingRequired;
@property(nonatomic) _Bool supportPayWithGoogleTheme; // @dynamic supportPayWithGoogleTheme;
@property(nonatomic) _Bool useGooglePayBrand; // @dynamic useGooglePayBrand;
@property(nonatomic) _Bool useTemplateRequirementsScheme; // @dynamic useTemplateRequirementsScheme;

@end

