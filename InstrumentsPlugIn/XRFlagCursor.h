//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <InstrumentsPlugIn/XRStrategyInspectionCursor.h>

@class NSArray;

@interface XRFlagCursor : XRStrategyInspectionCursor
{
    NSArray *_flagsByTime;
    unsigned long long _index;
}

- (void).cxx_destruct;
- (BOOL)_populateInspectionDataElements:(id)arg1;
- (void)_moveBackward;
- (BOOL)_canMoveBackward;
- (void)_moveForward;
- (BOOL)_canMoveForward;
- (id)representedObject;
- (BOOL)moveToFlag:(id)arg1;
- (void)moveToTime:(unsigned long long)arg1;
- (id)initWithFlagArray:(id)arg1;
- (id)init;

@end

