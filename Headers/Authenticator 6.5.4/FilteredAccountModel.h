//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSPredicate;

@interface FilteredAccountModel : NSObject
{
    NSPredicate *_predicate;
    NSArray *_filteredAccounts;
    NSArray *_sortDescriptors;
    CDUnknownBlockType _accountsDidChangeCallback;
}

- (void).cxx_destruct;
@property(copy) CDUnknownBlockType accountsDidChangeCallback; // @synthesize accountsDidChangeCallback=_accountsDidChangeCallback;
- (void)controllerDidChangeContent:(id)arg1;
- (void)updateCache;
- (void)refetchResults;
- (void)refetchResultsWithPredicate:(id)arg1;
- (id)accounts;
- (void)dealloc;
- (id)initWithManagedObjectContext:(id)arg1;

@end

