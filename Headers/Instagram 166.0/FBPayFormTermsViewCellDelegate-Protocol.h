//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class FBPayFormTermsViewCell, NSString, NSURL;

@protocol FBPayFormTermsViewCellDelegate <NSObject>
- (void)fbpayFormTermsViewCell:(FBPayFormTermsViewCell *)arg1 didLongTapOnString:(NSString *)arg2 URL:(NSURL *)arg3;
- (void)fbpayFormTermsViewCell:(FBPayFormTermsViewCell *)arg1 didTapOnString:(NSString *)arg2 URL:(NSURL *)arg3;
@end

