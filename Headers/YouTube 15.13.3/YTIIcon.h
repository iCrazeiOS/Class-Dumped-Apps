//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@interface YTIIcon : GPBMessage
{
}

+ (id)descriptor;
- (id)adOverlayImageForBadge:(_Bool)arg1;
- (id)adOverlayImageForBadge:(_Bool)arg1 darkImage:(_Bool)arg2;
- (id)ych_overlayImageTintedWithColor:(id)arg1;
- (id)ych_imageTintedWithColor:(id)arg1;
- (id)iconImageWithSelected:(_Bool)arg1;
- (id)iconImageWithColor:(id)arg1;
- (id)newIconImageWithColor:(id)arg1;
- (id)iconImageForContextMenuWithSelected:(_Bool)arg1;
- (id)iconImageWithPageStyle:(long long)arg1;

// Remaining properties
@property(nonatomic) _Bool hasIconType; // @dynamic hasIconType;
@property(nonatomic) int iconType; // @dynamic iconType;

@end

