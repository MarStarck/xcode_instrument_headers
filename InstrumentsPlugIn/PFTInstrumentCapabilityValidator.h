//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <InstrumentsPlugIn/PFTInstrumentEvaluator.h>

@class NSString;

@interface PFTInstrumentCapabilityValidator : PFTInstrumentEvaluator
{
    NSString *_capability;
    long long _minVersion;
}

@property(readonly, nonatomic) long long minVersion; // @synthesize minVersion=_minVersion;
@property(readonly, retain, nonatomic) NSString *capability; // @synthesize capability=_capability;
- (void).cxx_destruct;
- (id)description;
- (BOOL)evaluateWithDevice:(id)arg1 variables:(id)arg2;
- (id)initWithCapability:(id)arg1 minVersion:(int)arg2 errorString:(id)arg3;
- (id)initWithCapability:(id)arg1 minVersion:(int)arg2;

@end

