//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ArgoCore/NFLXGeneratedObject.h>

@class NSString;

@interface NFUIContentWarningViewModel : NFLXGeneratedObject
{
    NSString *_url;
    NSString *_message;
}

@property(readonly, copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, copy, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (_Bool)hasContentWarning;
- (id)buttonTitle;

@end

