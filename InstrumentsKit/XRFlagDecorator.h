//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTTimelineDecorator.h"

@class XRFlagController;

@interface XRFlagDecorator : DTTimelineDecorator
{
    XRFlagController *_controller;
}

- (void).cxx_destruct;
- (BOOL)mustDecorateOnMainThread;
- (id)decorateContainer:(struct DTTimelineDecorationContainer *)arg1;
- (void)setDefaultsForPlane:(id)arg1;
- (id)initWithController:(id)arg1;

@end
