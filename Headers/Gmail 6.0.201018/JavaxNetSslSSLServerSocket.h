//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaNetServerSocket.h"

@interface JavaxNetSslSSLServerSocket : JavaNetServerSocket
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (id)description;
- (void)setSSLParametersWithJavaxNetSslSSLParameters:(id)arg1;
- (id)getSSLParameters;
- (_Bool)getEnableSessionCreation;
- (void)setEnableSessionCreationWithBoolean:(_Bool)arg1;
- (_Bool)getUseClientMode;
- (void)setUseClientModeWithBoolean:(_Bool)arg1;
- (_Bool)getWantClientAuth;
- (void)setWantClientAuthWithBoolean:(_Bool)arg1;
- (_Bool)getNeedClientAuth;
- (void)setNeedClientAuthWithBoolean:(_Bool)arg1;
- (void)setEnabledProtocolsWithNSStringArray:(id)arg1;
- (id)getEnabledProtocols;
- (id)getSupportedProtocols;
- (id)getSupportedCipherSuites;
- (void)setEnabledCipherSuitesWithNSStringArray:(id)arg1;
- (id)getEnabledCipherSuites;
- (id)initWithInt:(int)arg1 withInt:(int)arg2 withJavaNetInetAddress:(id)arg3;
- (id)initWithInt:(int)arg1 withInt:(int)arg2;
- (id)initWithInt:(int)arg1;
- (id)init;

@end

