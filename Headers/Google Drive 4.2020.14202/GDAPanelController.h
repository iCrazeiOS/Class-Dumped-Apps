//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol GDAPanelControllerDelegate, GDKViewControllerPresenting;

@interface GDAPanelController : NSObject
{
    // Error parsing type: , name: displayG1Upsell
    // Error parsing type: , name: storageCacheURL
    // Error parsing type: , name: displayDelegate
    // Error parsing type: , name: viewPresenter
    // Error parsing type: , name: userFlags
    // Error parsing type: , name: queuedAction
    // Error parsing type: , name: sectionedModel
    // Error parsing type: , name: drawerViewController
    // Error parsing type: , name: $__lazy_storage_$_drawerConfiguration
    // Error parsing type: , name: _itemListViewController
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithUserFlags:(id)arg1;
@property(nonatomic) __weak id <GDKViewControllerPresenting> viewPresenter; // @synthesize viewPresenter;
@property(nonatomic) __weak id <GDAPanelControllerDelegate> displayDelegate; // @synthesize displayDelegate;
@property(nonatomic, copy) NSURL *storageCacheURL;
@property(nonatomic) _Bool displayG1Upsell; // @synthesize displayG1Upsell;

@end

