//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/NSCopying-Protocol.h>

@class IGMedia, NSString, NSURL, UIImage;

@interface IGHighlightCoverModel : NSObject <NSCopying>
{
    _Bool _titleEditingDisabled;
    _Bool _autoHighlightSwitchVisible;
    UIImage *_customImage;
    NSURL *_customImageURL;
    IGMedia *_item;
    NSString *_customImageUploadID;
    struct CGRect _cropRect;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool autoHighlightSwitchVisible; // @synthesize autoHighlightSwitchVisible=_autoHighlightSwitchVisible;
@property(readonly, nonatomic) _Bool titleEditingDisabled; // @synthesize titleEditingDisabled=_titleEditingDisabled;
@property(copy, nonatomic) NSString *customImageUploadID; // @synthesize customImageUploadID=_customImageUploadID;
@property(nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
@property(retain, nonatomic) IGMedia *item; // @synthesize item=_item;
@property(readonly, nonatomic) NSURL *customImageURL; // @synthesize customImageURL=_customImageURL;
@property(retain, nonatomic) UIImage *customImage; // @synthesize customImage=_customImage;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)hasCustomImage;
- (id)initWithCustomImage:(id)arg1 customImageURL:(id)arg2 media:(id)arg3 cropRect:(struct CGRect)arg4 titleEditingDisabled:(_Bool)arg5 autoHighlightSwitchVisible:(_Bool)arg6;

@end

