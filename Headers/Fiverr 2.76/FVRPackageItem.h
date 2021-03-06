//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JSONModel/JSONModel.h>

@class NSArray, NSNumber, NSString;
@protocol Optional;

@interface FVRPackageItem : JSONModel
{
    _Bool _isUserSelectedExtraFast;
    _Bool _isCustomized;
    NSString<Optional> *_packageId;
    NSString<Optional> *_packageTitle;
    NSString<Optional> *_packageDescription;
    NSString<Optional> *_packageDurationUnit;
    NSNumber<Optional> *_packagePrice;
    NSNumber<Optional> *_originalPackagePrice;
    NSNumber<Optional> *_originalPackageDuration;
    NSNumber<Optional> *_packageDuration;
    NSArray<Optional> *_packagePricingFactors;
}

+ (_Bool)propertyIsOptional:(id)arg1;
+ (id)keyMapper;
@property(nonatomic) _Bool isCustomized; // @synthesize isCustomized=_isCustomized;
@property(nonatomic) _Bool isUserSelectedExtraFast; // @synthesize isUserSelectedExtraFast=_isUserSelectedExtraFast;
@property(retain, nonatomic) NSArray<Optional> *packagePricingFactors; // @synthesize packagePricingFactors=_packagePricingFactors;
@property(retain, nonatomic) NSNumber<Optional> *packageDuration; // @synthesize packageDuration=_packageDuration;
@property(retain, nonatomic) NSNumber<Optional> *originalPackageDuration; // @synthesize originalPackageDuration=_originalPackageDuration;
@property(retain, nonatomic) NSNumber<Optional> *originalPackagePrice; // @synthesize originalPackagePrice=_originalPackagePrice;
@property(retain, nonatomic) NSNumber<Optional> *packagePrice; // @synthesize packagePrice=_packagePrice;
@property(copy, nonatomic) NSString<Optional> *packageDurationUnit; // @synthesize packageDurationUnit=_packageDurationUnit;
@property(copy, nonatomic) NSString<Optional> *packageDescription; // @synthesize packageDescription=_packageDescription;
@property(copy, nonatomic) NSString<Optional> *packageTitle; // @synthesize packageTitle=_packageTitle;
@property(copy, nonatomic) NSString<Optional> *packageId; // @synthesize packageId=_packageId;
- (void).cxx_destruct;
- (id)packageUserSelectedUnitsOrDefultValue;
- (id)packagePriceWithUserSelectedData;
- (id)userSelectedDataPrice;
- (id)packageExtraItemWithCalcolator;
- (id)packageExtraFastItem;
- (id)gigExtraForGigExtraId:(id)arg1;

@end

