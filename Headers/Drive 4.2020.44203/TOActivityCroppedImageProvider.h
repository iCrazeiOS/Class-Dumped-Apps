//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIActivityItemProvider.h>

@class UIImage;

@interface TOActivityCroppedImageProvider : UIActivityItemProvider
{
    _Bool _circular;
    UIImage *_image;
    long long _angle;
    UIImage *_croppedImage;
    struct CGRect _cropFrame;
}

- (void).cxx_destruct;
@property(retain) UIImage *croppedImage; // @synthesize croppedImage=_croppedImage;
@property(nonatomic) _Bool circular; // @synthesize circular=_circular;
@property(nonatomic) long long angle; // @synthesize angle=_angle;
@property(nonatomic) struct CGRect cropFrame; // @synthesize cropFrame=_cropFrame;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (id)item;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)initWithImage:(id)arg1 cropFrame:(struct CGRect)arg2 angle:(long long)arg3 circular:(_Bool)arg4;

@end

