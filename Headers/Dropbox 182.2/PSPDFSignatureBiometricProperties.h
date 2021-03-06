//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PSPDFKit/NSSecureCoding-Protocol.h>

@class NSArray, NSNumber, PDFCSignatureBiometricProperties;

@interface PSPDFSignatureBiometricProperties : NSObject <NSSecureCoding>
{
    PDFCSignatureBiometricProperties *_coreSignatureBiometricProperties;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) PDFCSignatureBiometricProperties *coreSignatureBiometricProperties; // @synthesize coreSignatureBiometricProperties=_coreSignatureBiometricProperties;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) unsigned long long inputMethod;
@property(readonly, nonatomic) NSNumber *touchRadius;
@property(readonly, nonatomic) NSArray *timePointsList;
@property(readonly, nonatomic) NSArray *pressureList;
- (id)initWithPressureList:(id)arg1 timePointsList:(id)arg2 touchRadius:(id)arg3 inputMethod:(unsigned long long)arg4;
- (id)initWithCoreSignatureBiometricProperties:(id)arg1;

@end

