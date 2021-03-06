//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "D2DConnection-Protocol.h"
#import "HMEBilateralConnectorDelegate-Protocol.h"

@class HMEBilateralConnector, NSString;
@protocol D2DConnectionDelegate, HMEDUSIReceivingDelegate;

@interface HMED2DLanConnection : NSObject <D2DConnection, HMEBilateralConnectorDelegate>
{
    _Bool _isConnected;
    _Bool _handledByHomeApp;
    id <D2DConnectionDelegate> _delegate;
    id <HMEDUSIReceivingDelegate> _DUSIDelegate;
    HMEBilateralConnector *_connector;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HMEBilateralConnector *connector; // @synthesize connector=_connector;
@property(nonatomic, getter=isHandledByHomeApp) _Bool handledByHomeApp; // @synthesize handledByHomeApp=_handledByHomeApp;
@property(readonly, nonatomic) _Bool isConnected; // @synthesize isConnected=_isConnected;
@property(nonatomic) __weak id <HMEDUSIReceivingDelegate> DUSIDelegate; // @synthesize DUSIDelegate=_DUSIDelegate;
@property(nonatomic) __weak id <D2DConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)sendRequestTVSignedAccountsSafe;
- (void)sendRequestTVStartSDDTWithAccountNameSafe:(id)arg1;
- (id)getSDDTDataPacket:(id)arg1;
- (void)didCloseConnection;
- (void)didOpenConnection;
- (void)failToConnect;
- (void)didReceiveDataFromConnector:(id)arg1;
- (void)disconnect;
- (void)sendData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendRequestTVSignedAccounts;
- (void)sendRequestTVStartSDDTWithAccountName:(id)arg1;
- (id)initWithIpAddr:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

