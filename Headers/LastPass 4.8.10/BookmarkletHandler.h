//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ServerRequestHandler.h"

@interface BookmarkletHandler : ServerRequestHandler
{
    int _type;
}

+ (id)handlerWithType:(int)arg1 delegate:(id)arg2;
@property(nonatomic) int type; // @synthesize type=_type;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)execute;

@end

