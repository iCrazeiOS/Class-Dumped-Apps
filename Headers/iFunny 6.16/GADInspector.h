//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface GADInspector : NSObject
{
    NSMutableDictionary *_adTransactions;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)appInfoDictionary;
- (id)adapters;
- (id)inspectorExtrasDictionary;
- (id)adSlotDictionary;
- (id)inspectorJSONString;
- (void)recordResponseInfo:(id)arg1 adUnitID:(id)arg2 adTypes:(id)arg3 errors:(id)arg4;
- (void)presentInspectorFromViewController:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;

@end

