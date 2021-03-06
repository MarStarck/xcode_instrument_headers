//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XRInstrumentTypeData.h"

@class DVTExtension, DVTPlugIn, NSArray, NSDictionary, NSSet, NSString, NSURL;

@interface XRExtensionInstrumentTypeData : NSObject <XRInstrumentTypeData>
{
    DVTExtension *_extension;
}

@property(readonly) DVTExtension *extension; // @synthesize extension=_extension;
- (void).cxx_destruct;
@property(readonly) NSSet *activatesAugmentations;
@property(readonly) NSArray *recordingParameters;
@property(readonly) BOOL hasRecordingControls;
- (void)_parseRecordingAssertions:(id)arg1 into:(id)arg2;
- (void)_parseLegacyRecordingOptions:(id)arg1;
- (void)_parseRecordingOptionPlatforms:(id)arg1 into:(id)arg2;
- (void)_parseRequiredCapabilities:(id)arg1 into:(id)arg2;
- (void)_parseSupportedServices:(id)arg1 into:(id)arg2;
- (void)_parseLegacySupportedServices:(id)arg1;
- (void)_parseSupportedPlatforms:(id)arg1 into:(id)arg2;
- (void)_parseLegacySupportedPlatforms:(id)arg1;
@property(readonly) NSDictionary *recordingAssertions;
- (BOOL)isDTraceBased;
@property(readonly) BOOL useLegacyRecordingOptions;
@property(readonly) NSDictionary *recordingOptionAssertions;
@property(readonly) NSArray *capabilityAssertions;
@property(readonly) BOOL simulatorRequiresService;
@property(readonly) NSArray *serviceAssertions;
@property(readonly) NSDictionary *platformAssertions;
- (BOOL)hasValueForKey:(id)arg1;
- (id)valueForKey:(id)arg1 error:(id *)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (void)loadExtensionPlugIn;
- (void)loadExtensionBundle;
@property(readonly) DVTPlugIn *plugIn;
@property(readonly) NSArray *keywords;
@property(readonly) NSURL *iconURL;
@property(readonly) NSString *helpURL;
@property(readonly) NSArray *brushNames;
@property(readonly) int preferredTargetType;
@property(readonly) BOOL canLaunch;
@property(readonly) BOOL canAttach;
@property(readonly) BOOL canAttachToAll;
@property(readonly) BOOL canReplay;
@property(readonly) NSString *uuid;
@property(readonly) unsigned int deckUnits;
@property(readonly) NSString *defaultBrushName;
@property(readonly) BOOL deprecated;
@property(readonly) BOOL beta;
@property(readonly) NSString *instrumentClassName;
@property(readonly, copy) NSString *description;
@property(readonly) NSString *category;
@property(readonly) NSString *version;
@property(readonly) NSString *name;
@property(readonly) NSString *identifier;
- (id)initWithExtension:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

