//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaIoSerializable-Protocol.h"

@class NSString;

@interface JavaUtilCurrency : NSObject <JavaIoSerializable>
{
    NSString *currencyCode_;
}

+ (void)initialize;
+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)getAvailableCurrencies;
+ (id)constructAvailableCurrencyCodes;
+ (id)getInstanceWithJavaUtilLocale:(id)arg1;
+ (id)getInstanceWithNSString:(id)arg1;
- (void)dealloc;
- (id)readResolve;
@property(readonly, copy) NSString *description;
- (id)getDisplayNameWithJavaUtilLocale:(id)arg1;
- (id)getDisplayName;
- (int)getNumericCode;
- (int)getDefaultFractionDigits;
- (id)getSymbolWithJavaUtilLocale:(id)arg1;
- (id)getSymbol;
- (id)getCurrencyCode;
- (id)initWithNSString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

