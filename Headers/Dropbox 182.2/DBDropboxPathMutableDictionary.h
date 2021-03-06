//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DropboxExtensions/DBDropboxPathDictionary-Protocol.h>

@class NSMutableDictionary, NSString;

@interface DBDropboxPathMutableDictionary : NSObject <DBDropboxPathDictionary>
{
    NSMutableDictionary *_dict;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)allValues;
- (id)allPaths;
- (unsigned long long)count;
- (id)objectForPath:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForPath:(id)arg1;
- (void)setObject:(id)arg1 forPath:(id)arg2;
- (id)initWithDropboxPathDictionary:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

