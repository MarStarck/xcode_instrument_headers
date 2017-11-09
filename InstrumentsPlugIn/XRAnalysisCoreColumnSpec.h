//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString;

@interface XRAnalysisCoreColumnSpec : NSObject <NSSecureCoding>
{
    BOOL _hiddenByDefault;
    NSString *_mnemonic;
    NSString *_displayName;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic, getter=isHiddenByDefault) BOOL hiddenByDefault; // @synthesize hiddenByDefault=_hiddenByDefault;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *mnemonic; // @synthesize mnemonic=_mnemonic;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

