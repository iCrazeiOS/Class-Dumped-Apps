//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol GDKCelloExecuting;

@interface GDKCelloFileFetcherParams : NSObject
{
    _Bool _enableQueryByIDsForAllFileFetchOperations_41;
    id <GDKCelloExecuting> _cello_5;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool enableQueryByIDsForAllFileFetchOperations; // @synthesize enableQueryByIDsForAllFileFetchOperations=_enableQueryByIDsForAllFileFetchOperations_41;
@property(readonly, nonatomic) id <GDKCelloExecuting> cello; // @synthesize cello=_cello_5;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCello:(id)arg1 enableQueryByIDsForAllFileFetchOperations:(_Bool)arg2;

@end

