//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface TAGPBExtensionRegistry : NSObject
{
    NSMutableDictionary *mutableClassMap_;
}

- (void)addExtensions:(id)arg1;
- (id)extensionForDescriptor:(id)arg1 fieldNumber:(long long)arg2;
- (id)getExtension:(id)arg1 fieldNumber:(long long)arg2;
- (void)addExtension:(id)arg1;
- (id)extensionMapForContainingType:(id)arg1;
- (void)dealloc;
- (id)init;

@end

