//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CRPTService;

@interface CRPTServiceFactory : NSObject
{
    id <CRPTService> _serviceImplementation;
}

+ (id)createServiceWithConfiguration:(id)arg1;
+ (id)sharedServiceWithNullableConfiguration:(id)arg1;
+ (id)sharedServiceWithConfiguration:(id)arg1;
+ (id)sharedService;
@property(retain, nonatomic) id <CRPTService> serviceImplementation; // @synthesize serviceImplementation=_serviceImplementation;
- (void).cxx_destruct;

@end

