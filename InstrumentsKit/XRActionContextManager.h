//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, XRIntKeyedDictionary;

@interface XRActionContextManager : NSObject
{
    NSMutableArray *_actions;
    NSMutableDictionary *_classTargetedActions;
    NSMutableDictionary *_protocolTargetActions;
    XRIntKeyedDictionary *_etypeActions;
    NSMutableArray *_universalEtypeActions;
}

+ (void)dispatchActionWithIdentifier:(id)arg1 targets:(id)arg2 context:(id)arg3;
+ (id)sharedContextManager;
+ (void)initializePlugIns:(id)arg1;
+ (id)_actionHandlerWithExtension:(id)arg1;
- (void).cxx_destruct;
- (id)actionsForEngineeringType:(unsigned short)arg1;
- (id)actionWithIdentifier:(id)arg1;
- (id)actionsForClassName:(id)arg1;
- (id)actionsForPrototype:(id)arg1;
- (void)addAction:(id)arg1;
- (id)init;

@end

