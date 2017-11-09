//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, PFTInstrumentPlugin;

@interface XRPrototypeInstrumentManager : NSObject
{
    PFTInstrumentPlugin *_plugin;
    NSMutableDictionary *_instTypesByURL;
}

+ (id)_newSignpostTemplate;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_fullInputCodeSetForChild:(id)arg1;
- (id)_xmlElementFromChild:(id)arg1 fromURL:(id)arg2;
- (id)signpostConfigurationURLs;
- (void)_addSignpostInstrumentNodes:(id)arg1 fromPlist:(id)arg2;
- (void)_loadProtoInst:(id)arg1;
- (void)_parseAndRegisterExtension:(id)arg1 atURL:(id)arg2;
- (void)scanForPrototypes;
- (void)enumerateSearchPaths:(CDUnknownBlockType)arg1;
- (void)setPlugin:(id)arg1;
- (id)init;

@end
