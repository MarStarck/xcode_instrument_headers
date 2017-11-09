//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface DTKPCPUEvent : NSObject
{
    struct kpep_event *_kpepEvent;
    NSString *_displayName;
    NSString *_name;
    NSString *_alias;
    NSString *_definition;
}

@property(nonatomic) struct kpep_event *kpepEvent; // @synthesize kpepEvent=_kpepEvent;
@property(readonly, retain, nonatomic) NSString *definition; // @synthesize definition=_definition;
@property(retain, nonatomic) NSString *alias; // @synthesize alias=_alias;
@property(readonly, retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(readonly, retain, nonatomic) NSString *displayName;
@property(readonly, retain, nonatomic) NSString *aliasOrName;
- (id)initWithName:(id)arg1 alias:(id)arg2 definition:(id)arg3 kpepEvent:(struct kpep_event *)arg4;

@end
