//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSURLResponse;

@interface IBGLoggedResponse : NSObject
{
    NSURLResponse *_loggedResponse;
    NSData *_loggedResponseData;
}

@property(retain, nonatomic) NSData *loggedResponseData; // @synthesize loggedResponseData=_loggedResponseData;
@property(retain, nonatomic) NSURLResponse *loggedResponse; // @synthesize loggedResponse=_loggedResponse;
- (void).cxx_destruct;

@end

