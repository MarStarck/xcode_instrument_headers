//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <InstrumentsPackaging/XRPackageElementParserBase.h>

@class NSString;

@interface XRPackageInstrumentElementParser : XRPackageElementParserBase
{
    BOOL _didHandleLimitationsElement;
    NSString *_icon;
}

+ (id)_elementNameToKVCMap;
+ (id)_elementNameToClassMap;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (void)_handleCompletion;
- (void)_handleStart;
- (void)setActivateAugmentation:(id)arg1;
- (void)limitationElementHandled;

@end

