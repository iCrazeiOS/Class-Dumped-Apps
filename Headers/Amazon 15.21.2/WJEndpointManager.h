//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol WJEndpointManagerDelegate;

@interface WJEndpointManager : NSObject
{
    id <WJEndpointManagerDelegate> _delegate;
}

@property(nonatomic) __weak id <WJEndpointManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)serviceEndpoint:(long long)arg1 provisioningEndpoint:(id)arg2;
- (void)discoverServices:(id)arg1;
- (void)disconnectFromProvisioningEndpoint:(id)arg1;
- (void)connectToProvisioningEndpoint:(id)arg1 encryptionEnabled:(_Bool)arg2;
- (void)connectToProvisioningEndpoint:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end

