//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMenu.h"

#import "NSMenuDelegate.h"

@class NSString, PFTProcess, XRDevice;

@interface XRChooserMenu : NSMenu <NSMenuDelegate>
{
    unsigned long long _controlSize;
    PFTProcess *_activeProcess;
    XRDevice *_targetDevice;
    id <XRProcessTargetedObject> _targetObject;
}

+ (id)chooserMenuForDevice:(id)arg1 process:(id)arg2 targetedObject:(id)arg3 controlSize:(unsigned long long)arg4;
@property(readonly, nonatomic) id <XRProcessTargetedObject> targetObject; // @synthesize targetObject=_targetObject;
@property(readonly, nonatomic) unsigned long long controlSize; // @synthesize controlSize=_controlSize;
- (void).cxx_destruct;
@property(retain, nonatomic) XRDevice *targetDevice; // @synthesize targetDevice=_targetDevice;
@property(retain, nonatomic) PFTProcess *activeProcess; // @synthesize activeProcess=_activeProcess;
- (void)setActiveProcessToAllProcesses;
- (void)rebuildMenu;
- (void)menuNeedsUpdate:(id)arg1;
- (id)initWithDevice:(id)arg1 process:(id)arg2 targetedObject:(id)arg3 controlSize:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

