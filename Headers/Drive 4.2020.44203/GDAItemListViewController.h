//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/OGLItemListViewController.h>

@protocol OGLDrawerChildViewControllerDelegate;

@interface GDAItemListViewController : OGLItemListViewController
{
    id <OGLDrawerChildViewControllerDelegate> _drawerDelegate;
    struct UIEdgeInsets _edgeInsets;
}

- (void).cxx_destruct;
- (void)setEdgeInsets:(struct UIEdgeInsets)arg1;
- (struct UIEdgeInsets)edgeInsets;
- (void)setDrawerDelegate:(id)arg1;
- (id)drawerDelegate;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;

@end

