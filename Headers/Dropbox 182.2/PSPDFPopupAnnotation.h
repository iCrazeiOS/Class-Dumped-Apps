//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PSPDFKit/PSPDFAnnotation.h>

@interface PSPDFPopupAnnotation : PSPDFAnnotation
{
    _Bool _open;
}

+ (id)propertyKeys;
+ (id)supportedTypes;
@property(getter=isOpen) _Bool open; // @synthesize open=_open;
- (_Bool)open;
- (void)implementation_refreshFromCoreAnnotation:(id)arg1 additionalWork:(CDUnknownBlockType)arg2;
- (id)initWithCoreAnnotation:(id)arg1;
- (id)init;
- (_Bool)isResizable;

@end

