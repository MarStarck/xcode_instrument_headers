//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, XRLazyKVOAdapter;

@protocol XRLazyKVOResponder <NSObject>
- (void)handleLazyKVOUpdate:(XRLazyKVOAdapter *)arg1;

@optional
- (void)prepareForLazyKVOUpdate:(XRLazyKVOAdapter *)arg1 object:(id)arg2 keyPath:(NSString *)arg3 context:(const void *)arg4;
@end

