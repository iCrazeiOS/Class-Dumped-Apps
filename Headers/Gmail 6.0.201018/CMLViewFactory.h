//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CMLComponentDispatcher;

@interface CMLViewFactory : NSObject
{
    id <CMLComponentDispatcher> _componentDispatcher;
}

- (void).cxx_destruct;
- (id)comProtoFromComProtoData:(id)arg1;
- (id)componentFromComponentData:(id)arg1 renderSource:(id)arg2 cmlContext:(id)arg3;
- (id)componentFromRenderResult:(id)arg1 renderSource:(id)arg2;
- (id)componentFromRenderResult:(id)arg1;
- (id)initWithComponentDispatcher:(id)arg1;

@end

