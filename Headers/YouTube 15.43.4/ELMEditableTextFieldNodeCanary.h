//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/ASDisplayNode.h>

#import <Module_Framework/ELMDisplayNode-Protocol.h>
#import <Module_Framework/UITextFieldDelegate-Protocol.h>

@class ELMEditableTextNode, ELMElement, ELMNodeController, NSDictionary, NSString;
@protocol ELMContext, ELMController;

@interface ELMEditableTextFieldNodeCanary : ASDisplayNode <ELMDisplayNode, UITextFieldDelegate>
{
    ELMEditableTextNode *_textNode;
    id <ELMContext> _context;
    ELMNodeController *_textNodeController;
    NSDictionary *_textAttributes;
    _Bool _hasPartialStyleRun;
    // Error parsing type: {AttributedString="_vptr$MessageLite"^^?"_internal_metadata_"{InternalMetadata="ptr_"^v}"_has_bits_"{HasBits<1>="has_bits_"[1I]}"_cached_size_"{CachedSize="size_"{atomic<int>="__a_"{__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >="__a_value"Ai}}}"style_runs_"{WeakRepeatedPtrField<youtube::elements::StyleRun>=""(?="weak"{RepeatedPtrField<youtube::elements::StyleRun>="arena_"^{Arena}"current_size_"i"total_size_"i"rep_"^{Rep}})}"command_runs_"{WeakRepeatedPtrField<youtube::elements::CommandRun>=""(?="weak"{RepeatedPtrField<youtube::elements::CommandRun>="arena_"^{Arena}"current_size_"i"total_size_"i"rep_"^{Rep}})}"attachment_runs_"{WeakRepeatedPtrField<youtube::elements::AttachmentRun>=""(?="weak"{RepeatedPtrField<youtube::elements::AttachmentRun>="arena_"^{Arena}"current_size_"i"total_size_"i"rep_"^{Rep}})}"content_"{ArenaStringPtr="tagged_ptr_"{TaggedPtr<std::__1::basic_string<char> >="ptr_"^v}}"android_include_font_padding_"B"alignment_"i"line_spacing_"f"line_break_mode_"i}, name: _previousPlaceholderText
    ELMElement *_element;
}

+ (_Bool)needsDefaultTextAttributesHack;
+ (_Bool)canBeLayerBacked:(id)arg1 withContext:(id)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain) ELMElement *element; // @synthesize element=_element;
- (void)resolveFirstResponder;
-     // Error parsing type: v32@0:8^{SenderState=^^?{InternalMetadata=^v}{ExtensionSet=^{Arena}SS(AllocatedData=^{KeyValue}^{map<int, proto2::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, proto2::internal::ExtensionSet::Extension> > >})}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}}16@24, name: buildSenderState:withText:
- (long long)keyboardType;
-     // Error parsing type: v24@0:8^{SenderState=^^?{InternalMetadata=^v}{ExtensionSet=^{Arena}SS(AllocatedData=^{KeyValue}^{map<int, proto2::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, proto2::internal::ExtensionSet::Extension> > >})}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}}16, name: buildSenderState:
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)didLoad;
- (_Bool)performAccessibilityCustomAction:(id)arg1;
- (struct CGSize)calculateSizeThatFits:(struct CGSize)arg1;
- (_Bool)managesGestureHandling;
- (void)textFieldTextDidChange:(id)arg1;
- (void)applyViewProperties;
- (void)controllerDidApplyProperties;
- (id)initWithElement:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) id <ELMController> controller; // @dynamic controller;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

