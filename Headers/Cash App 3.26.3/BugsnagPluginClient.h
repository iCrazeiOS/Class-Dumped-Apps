//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BugsnagClient, NSSet;

@interface BugsnagPluginClient : NSObject
{
    NSSet *_plugins;
    BugsnagClient *_client;
}

@property(retain) BugsnagClient *client; // @synthesize client=_client;
@property(retain) NSSet *plugins; // @synthesize plugins=_plugins;
- (void).cxx_destruct;
- (void)loadPlugins;
- (id)instantiateBugsnagPlugin:(id)arg1;
- (id)initWithPlugins:(id)arg1 client:(id)arg2;

@end

