//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <InstrumentsPlugIn/PFTInstrumentType.h>

@class XRPackagedInstrument;

@interface XRPackagedInstrumentType : PFTInstrumentType
{
    XRPackagedInstrument *_pkgInstrument;
}

- (void).cxx_destruct;
- (id)userInterfacePlanForRecordingControlState:(id)arg1 target:(id)arg2;
- (id)referencedParameterNames;
- (id)requiredTableSpecsWithRecordingControlState:(id)arg1 target:(id)arg2;
- (id)requiredExtensionURLs;
- (id)createInstrument;
- (id)initWithPlugIn:(id)arg1 packagedInstrument:(id)arg2;

@end

