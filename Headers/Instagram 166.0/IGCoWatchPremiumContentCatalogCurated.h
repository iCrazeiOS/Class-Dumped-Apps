//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <InstagramAppCoreFramework/NSCoding-Protocol.h>
#import <InstagramAppCoreFramework/NSCopying-Protocol.h>

@protocol IGCoWatchCatalogItem;

@interface IGCoWatchPremiumContentCatalogCurated : FBValueObject <NSCopying, NSCoding>
{
    id <IGCoWatchCatalogItem> _content;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <IGCoWatchCatalogItem> content; // @synthesize content=_content;
- (id)initWithContent:(id)arg1;

@end

