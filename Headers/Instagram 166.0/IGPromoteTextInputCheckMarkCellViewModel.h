//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGListDiffable-Protocol.h>

@class IGStyledString, NSString;

@interface IGPromoteTextInputCheckMarkCellViewModel : NSObject <IGListDiffable>
{
    _Bool _isDynamic;
    _Bool _shouldShowBottomSeparator;
    IGStyledString *_placeHolderText;
    NSString *_inputText;
    long long _keyboardType;
    double _bottomSeparatorHorizontalInset;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double bottomSeparatorHorizontalInset; // @synthesize bottomSeparatorHorizontalInset=_bottomSeparatorHorizontalInset;
@property(readonly, nonatomic) _Bool shouldShowBottomSeparator; // @synthesize shouldShowBottomSeparator=_shouldShowBottomSeparator;
@property(readonly, nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
@property(readonly, nonatomic) _Bool isDynamic; // @synthesize isDynamic=_isDynamic;
@property(copy, nonatomic) NSString *inputText; // @synthesize inputText=_inputText;
@property(readonly, copy, nonatomic) IGStyledString *placeHolderText; // @synthesize placeHolderText=_placeHolderText;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (_Bool)needUpdateShouldShowTitle:(id)arg1;
@property(readonly, nonatomic) _Bool shouldShowTitle;
- (id)initWithPlaceHolderText:(id)arg1 inputText:(id)arg2 keyboardType:(long long)arg3 isDynamic:(_Bool)arg4 shouldShowBottomSeparator:(_Bool)arg5 bottomSeparatorHorizontalInset:(double)arg6;

@end

