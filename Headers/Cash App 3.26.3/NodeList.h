//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSFastEnumeration-Protocol.h"

@class NSMutableArray;

@interface NodeList : NSObject <NSFastEnumeration>
{
    NSMutableArray *internalArray;
}

@property(retain, nonatomic) NSMutableArray *internalArray; // @synthesize internalArray;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
@property(readonly) unsigned long long length;
- (id)item:(unsigned long long)arg1;
- (id)init;

@end

