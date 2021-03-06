//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBFilter.h>

#import <FBSharedFramework/NSCopying-Protocol.h>

@interface FBIGLUFilter : FBFilter <NSCopying>
{
    shared_ptr_998cc3cc _commandQueue;
    shared_ptr_4362f975 _resourceLoader;
    shared_ptr_eefa0e38 _device;
    shared_ptr_f184d616 _igluFilter;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) struct IFilter *igluFilter;
- (unsigned long long)outputPixelFormat;
- (unsigned long long)inputPixelFormat;
- (_Bool)render:(id)arg1 to:(id)arg2 time:(CDStruct_1b6d18a9)arg3;
- (id)initWithIgluFilter:(shared_ptr_f184d616)arg1 device:(shared_ptr_eefa0e38)arg2 resourceLoader:(shared_ptr_4362f975)arg3;

@end

