//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class GUNSEImage, NSString;

@interface GUNSEDestination : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *URL; // @dynamic URL;
@property(copy, nonatomic) NSString *accessibilityLabel_p; // @dynamic accessibilityLabel_p;
@property(nonatomic) _Bool hasAccessibilityLabel_p; // @dynamic hasAccessibilityLabel_p;
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasText; // @dynamic hasText;
@property(nonatomic) _Bool hasURL; // @dynamic hasURL;
@property(retain, nonatomic) GUNSEImage *icon; // @dynamic icon;
@property(copy, nonatomic) NSString *text; // @dynamic text;

@end

