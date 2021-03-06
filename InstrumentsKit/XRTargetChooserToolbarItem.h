//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <InstrumentsKit/XRToolbarItem.h>

#import "NSMenuDelegate.h"
#import "NSPathControlDelegate.h"
#import "XRDeviceObserver.h"

@class NSObject<XRProcessTargetedObject>, NSString, XRTargetChooserPathControl;

@interface XRTargetChooserToolbarItem : XRToolbarItem <NSPathControlDelegate, NSMenuDelegate, XRDeviceObserver>
{
    NSObject<XRProcessTargetedObject> *_currentTargetedObject;
    XRTargetChooserPathControl *_pathControl;
}

@property(retain) XRTargetChooserPathControl *pathControl; // @synthesize pathControl=_pathControl;
- (void).cxx_destruct;
- (long long)visibilityPriority;
- (struct CGSize)minSize;
- (struct CGSize)maxSize;
- (void)_reconfigurePathControl;
- (void)disconnectFromContext;
- (void)connectToContext:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)handleDeviceNotification:(id)arg1;
- (id)initWithItemIdentifier:(id)arg1 documentIdentifier:(id)arg2;
- (id)device;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

