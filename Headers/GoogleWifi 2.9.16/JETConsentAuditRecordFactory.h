//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface JETConsentAuditRecordFactory : NSObject
{
}

- (id)init;
- (id)createAuditRecordForDecision:(id)arg1 contextType:(long long)arg2 consentText:(id)arg3 userID:(id)arg4 languageCode:(id)arg5;
- (id)createAuditRecordForDisclosure:(long long)arg1 contextType:(long long)arg2 userID:(id)arg3 languageCode:(id)arg4;

@end

