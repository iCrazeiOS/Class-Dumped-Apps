//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDKFileActionResult-Protocol.h"

@class NSError, NSString;
@protocol GDKFile;

@interface GDKDefaultFileActionResult : NSObject <GDKFileActionResult>
{
    id <GDKFile> _file;
    NSError *_error;
}

+ (id)resultWithFile:(id)arg1 error:(id)arg2;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) id <GDKFile> file; // @synthesize file=_file;
- (void).cxx_destruct;
- (id)initWithFile:(id)arg1 error:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

