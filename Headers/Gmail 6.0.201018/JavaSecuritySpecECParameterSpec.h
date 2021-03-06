//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaSecuritySpecAlgorithmParameterSpec-Protocol.h"

@class JavaMathBigInteger, JavaSecuritySpecECPoint, JavaSecuritySpecEllipticCurve, NSString;

@interface JavaSecuritySpecECParameterSpec : NSObject <JavaSecuritySpecAlgorithmParameterSpec>
{
    JavaSecuritySpecEllipticCurve *curve_;
    JavaSecuritySpecECPoint *g_;
    JavaMathBigInteger *n_;
    int h_;
    NSString *curveName_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)getCurveName;
- (void)setCurveNameWithNSString:(id)arg1;
- (int)getCofactor;
- (id)getOrder;
- (id)getGenerator;
- (id)getCurve;
- (id)initWithJavaSecuritySpecEllipticCurve:(id)arg1 withJavaSecuritySpecECPoint:(id)arg2 withJavaMathBigInteger:(id)arg3 withInt:(int)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

