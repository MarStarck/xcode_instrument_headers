//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSMutableArray;

@interface PFTNibView : NSView
{
    NSView *_view;
    NSMutableArray *_topLevelObjects;
    BOOL _settingUpNibView;
    BOOL _didSetupNibView;
}

- (void).cxx_destruct;
- (id)classForNibName;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setupNibView:(BOOL)arg1;
- (id)init;

@end

