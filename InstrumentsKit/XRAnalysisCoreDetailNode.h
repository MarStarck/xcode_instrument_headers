//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString, XRAnalysisCoreTableQuery;

@interface XRAnalysisCoreDetailNode : NSObject <NSSecureCoding>
{
    XRAnalysisCoreDetailNode *_firstSibling;
    int _viewKind;
    NSString *_label;
    XRAnalysisCoreDetailNode *_parent;
    XRAnalysisCoreDetailNode *_nextSibling;
    XRAnalysisCoreTableQuery *_focusQuery;
    NSString *_planTemplateName;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) int viewKind; // @synthesize viewKind=_viewKind;
@property(retain, nonatomic) NSString *planTemplateName; // @synthesize planTemplateName=_planTemplateName;
@property(retain, nonatomic) XRAnalysisCoreTableQuery *focusQuery; // @synthesize focusQuery=_focusQuery;
@property(readonly, nonatomic) XRAnalysisCoreDetailNode *nextSibling; // @synthesize nextSibling=_nextSibling;
@property(readonly, nonatomic) XRAnalysisCoreDetailNode *parent; // @synthesize parent=_parent;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (void)assignNewRoot:(id)arg1;
- (id)root;
@property(readonly, nonatomic, getter=isSelectable) BOOL selectable;
@property(readonly, nonatomic) XRAnalysisCoreDetailNode *firstSibling;
- (id)insertSiblingWithLabel:(id)arg1 parent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLabel:(id)arg1 firstSibling:(id)arg2 nextSibling:(id)arg3;
- (id)initWithLabel:(id)arg1 parent:(id)arg2;
- (id)initWithLabel:(id)arg1 viewKind:(int)arg2;
- (id)initWithLabel:(id)arg1;
- (id)initWithLabel:(id)arg1 parent:(id)arg2 firstSibling:(id)arg3 nextSibling:(id)arg4 focusQuery:(id)arg5 planTemplateName:(id)arg6 viewKind:(int)arg7;

@end

