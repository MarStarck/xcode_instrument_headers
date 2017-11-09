//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSSet, NSString, NSURL;

@protocol XRInstrumentTypeData <NSObject>
@property(readonly) NSSet *activatesAugmentations;
@property(readonly) BOOL hasRecordingControls;
@property(readonly) NSArray *recordingParameters;
@property(readonly) BOOL useLegacyRecordingOptions;
@property(readonly) NSDictionary *recordingOptionAssertions;
@property(readonly) NSDictionary *recordingAssertions;
@property(readonly) NSArray *capabilityAssertions;
@property(readonly) BOOL simulatorRequiresService;
@property(readonly) NSArray *serviceAssertions;
@property(readonly) NSDictionary *platformAssertions;
@property(readonly) int preferredTargetType;
@property(readonly) BOOL canAttachToAll;
@property(readonly) BOOL canLaunch;
@property(readonly) BOOL canAttach;
@property(readonly) NSArray *brushNames;
@property(readonly) NSString *defaultBrushName;
@property(readonly) NSString *helpURL;
@property(readonly) BOOL deprecated;
@property(readonly) BOOL beta;
@property(readonly) NSString *instrumentClassName;
@property(readonly) BOOL canReplay;
@property(readonly) NSString *uuid;
@property(readonly) NSArray *keywords;
@property(readonly) unsigned int deckUnits;
@property(readonly) NSURL *iconURL;
@property(readonly, copy) NSString *description;
@property(readonly) NSString *category;
@property(readonly) NSString *version;
@property(readonly) NSString *name;
@property(readonly) NSString *identifier;
- (BOOL)hasValueForKey:(NSString *)arg1;
- (id)valueForKey:(NSString *)arg1 error:(id *)arg2;
- (void)loadExtensionPlugIn;
- (void)loadExtensionBundle;

@optional
- (NSString *)installedPackageName;
@end
