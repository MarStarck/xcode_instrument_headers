//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class NSString, XRPackagedAttributeValue, XRPackagedTableSpec;

@interface XRPackagedTableSpecAttribute : NSManagedObject
{
}

- (void)setArrayConstant:(id)arg1;
- (void)setCLIPSExpressionBinding:(id)arg1;
- (void)setParameterBinding:(id)arg1;
- (void)setIntegerConstant:(long long)arg1;
- (void)setStringConstant:(id)arg1;
- (void)appendBindToInputAttributeToString:(id)arg1;

// Remaining properties
@property(retain) NSString *name; // @dynamic name;
@property(retain) XRPackagedTableSpec *spec; // @dynamic spec;
@property(retain) XRPackagedAttributeValue *value; // @dynamic value;

@end

