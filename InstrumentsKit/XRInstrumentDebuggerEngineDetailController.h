//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObjectController.h"

#import "XRLazyKVOResponder.h"

@class NSString, NSTextView, XRInstrumentDebuggerEngineContext, XRInstrumentDebuggerWindowController, XRLazyKVOAdapter;

@interface XRInstrumentDebuggerEngineDetailController : NSObjectController <XRLazyKVOResponder>
{
    XRLazyKVOAdapter *_adapter;
    id _target;
    NSString *_keyPath;
    long long _consoleChunksAdded;
    NSString *_displayedContentMode;
    XRInstrumentDebuggerEngineContext *_displayedEngineContext;
    XRInstrumentDebuggerWindowController *_windowController;
    NSTextView *_consoleTextView;
    NSTextView *_commandView;
}

+ (void)initialize;
@property NSTextView *commandView; // @synthesize commandView=_commandView;
@property NSTextView *consoleTextView; // @synthesize consoleTextView=_consoleTextView;
@property(nonatomic) __weak XRInstrumentDebuggerWindowController *windowController; // @synthesize windowController=_windowController;
- (void).cxx_destruct;
- (void)textDidEndEditing:(id)arg1;
- (void)_setContentObject:(id)arg1;
- (void)handleLazyKVOUpdate:(id)arg1;
- (void)unbind:(id)arg1;
- (void)bind:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithContent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

