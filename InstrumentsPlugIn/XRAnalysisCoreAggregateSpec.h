//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSDictionary, NSString;

@interface XRAnalysisCoreAggregateSpec : NSObject <NSSecureCoding>
{
    BOOL _hiddenByDefault;
    NSString *_functionName;
    NSDictionary *_parameters;
    NSString *_columnIdentifier;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *columnIdentifier; // @synthesize columnIdentifier=_columnIdentifier;
@property(nonatomic, getter=isHiddenByDefault) BOOL hiddenByDefault; // @synthesize hiddenByDefault=_hiddenByDefault;
@property(copy, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(copy, nonatomic) NSString *functionName; // @synthesize functionName=_functionName;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
