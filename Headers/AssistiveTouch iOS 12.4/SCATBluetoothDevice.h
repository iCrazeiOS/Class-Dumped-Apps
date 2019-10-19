//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCATBluetoothDevice : NSObject
{
    NSString *_addressString;
    NSString *_name;
    _Bool _connected;
}

+ (id)scatBluetoothDeviceWithDevice:(struct BTDeviceImpl *)arg1 accessoryManager:(struct BTAccessoryManagerImpl *)arg2;
- (void).cxx_destruct;
- (void)customMessageReceived:(int)arg1 withData:(id)arg2;
- (void)deviceDisappeared;
- (unsigned long long)deviceType;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) _Bool connected;
@property(readonly, nonatomic) NSString *addressString;
- (_Bool)updateWithDevice:(struct BTDeviceImpl *)arg1 error:(id *)arg2;
- (id)initWithDevice:(struct BTDeviceImpl *)arg1;
- (_Bool)_setPropertiesFromDevice:(struct BTDeviceImpl *)arg1 error:(id *)arg2;
- (id)description;

@end

