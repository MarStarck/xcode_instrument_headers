//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XRXMLElementParser.h"

@class XRXMLTextElementParser;

@interface XRPackageAggregationMethodParameterElementParser : XRXMLElementParser
{
    XRXMLTextElementParser *_name;
    XRXMLTextElementParser *_value;
}

+ (id)_elementNameToClassMap;
@property(retain) XRXMLTextElementParser *value; // @synthesize value=_value;
@property(retain) XRXMLTextElementParser *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)_handleCompletion;

@end

