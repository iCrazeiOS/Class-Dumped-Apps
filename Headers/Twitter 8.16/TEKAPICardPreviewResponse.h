//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterExtensionKit/TEKAPIResponse.h>

@class NSError, NSString;

@interface TEKAPICardPreviewResponse : TEKAPIResponse
{
    _Bool _forceHTTPError;
    NSError *_cardPreviewError;
    long long _result;
    double _retryAfterDelay;
    NSString *_cardPreviewTitle;
    NSString *_cardPreviewImageURLString;
}

@property(readonly, copy, nonatomic) NSString *cardPreviewImageURLString; // @synthesize cardPreviewImageURLString=_cardPreviewImageURLString;
@property(readonly, copy, nonatomic) NSString *cardPreviewTitle; // @synthesize cardPreviewTitle=_cardPreviewTitle;
@property(readonly, nonatomic) double retryAfterDelay; // @synthesize retryAfterDelay=_retryAfterDelay;
@property(readonly, nonatomic) long long result; // @synthesize result=_result;
@property(readonly, nonatomic) NSError *cardPreviewError; // @synthesize cardPreviewError=_cardPreviewError;
- (void).cxx_destruct;
- (void)prepare;
- (id)prepareByParsingModel:(out id *)arg1;
- (_Bool)shouldTreatStatusCodeAsHTTPError;
- (id)anyError;

@end

