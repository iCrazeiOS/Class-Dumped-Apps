//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSError.h>

@interface DSCError : NSError
{
}

+ (id)descriptionForCode:(long long)arg1;
+ (id)errorWithCode:(long long)arg1 userInfo:(id)arg2 underlyingError:(id)arg3;
+ (id)errorWithCode:(long long)arg1 underlyingError:(id)arg2;
+ (id)errorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)errorWithCode:(long long)arg1;
- (id)errorWithUserInfoValue:(id)arg1 forKey:(id)arg2;
- (id)initWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3;

@end

