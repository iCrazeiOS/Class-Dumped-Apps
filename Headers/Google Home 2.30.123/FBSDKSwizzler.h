//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FBSDKSwizzler : NSObject
{
}

+ (_Bool)object:(id)arg1 ofClass:(Class)arg2 isCallingSelector:(SEL)arg3;
+ (void)object:(id)arg1 ofClass:(Class)arg2 removeSelector:(SEL)arg3;
+ (void)object:(id)arg1 ofClass:(Class)arg2 addSelector:(SEL)arg3;
+ (void)unswizzleSelector:(SEL)arg1 onClass:(Class)arg2 named:(id)arg3;
+ (void)unswizzleSelector:(SEL)arg1 onClass:(Class)arg2;
+ (void)swizzleSelector:(SEL)arg1 onClass:(Class)arg2 withBlock:(CDUnknownBlockType)arg3 named:(id)arg4;
+ (_Bool)isLocallyDefinedMethod:(struct objc_method *)arg1 onClass:(Class)arg2;
+ (void)setSwizzle:(id)arg1 forMethod:(struct objc_method *)arg2;
+ (void)removeSwizzleForMethod:(struct objc_method *)arg1;
+ (id)swizzleForMethod:(struct objc_method *)arg1;
+ (void)printSwizzles;
+ (void)resolveConflict;
+ (void)initialize;

@end

