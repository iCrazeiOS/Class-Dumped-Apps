//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ServiceChat/SCSURLEvent.h>

@class NSString, UIImage;

@interface SCSUIURLEvent : SCSURLEvent
{
    _Bool _urlLoaded;
    _Bool _centerImage;
    NSString *_previewTitle;
    NSString *_previewDescription;
    UIImage *_previewImage;
    NSString *_previewURL;
    UIImage *_favIconImage;
}

@property(nonatomic) _Bool centerImage; // @synthesize centerImage=_centerImage;
@property(nonatomic) _Bool urlLoaded; // @synthesize urlLoaded=_urlLoaded;
@property(retain, nonatomic) UIImage *favIconImage; // @synthesize favIconImage=_favIconImage;
@property(retain, nonatomic) NSString *previewURL; // @synthesize previewURL=_previewURL;
@property(retain, nonatomic) UIImage *previewImage; // @synthesize previewImage=_previewImage;
@property(retain, nonatomic) NSString *previewDescription; // @synthesize previewDescription=_previewDescription;
@property(retain, nonatomic) NSString *previewTitle; // @synthesize previewTitle=_previewTitle;
- (void).cxx_destruct;
- (id)initWithSender:(id)arg1 type:(unsigned long long)arg2 URL:(id)arg3;

@end

