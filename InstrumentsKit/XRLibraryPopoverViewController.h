//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTViewController.h"

#import "NSPopoverDelegate.h"

@class DVTReplacementView, NSPopover, NSString, NSView;

@interface XRLibraryPopoverViewController : DVTViewController <NSPopoverDelegate>
{
    NSPopover *_popover;
    DVTReplacementView *_replacementView;
    NSView *_relativeView;
}

@property(nonatomic) __weak NSView *relativeView; // @synthesize relativeView=_relativeView;
@property __weak DVTReplacementView *replacementView; // @synthesize replacementView=_replacementView;
@property(retain) NSPopover *popover; // @synthesize popover=_popover;
- (void).cxx_destruct;
- (void)popoverDidShow:(id)arg1;
- (void)togglePopover:(id)arg1;
- (void)hidePopover;
- (void)displayPopoverRelativeToView:(id)arg1;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
