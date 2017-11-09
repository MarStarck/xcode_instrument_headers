//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XRFileSystem.h"

@class NSArray, NSMutableDictionary, NSString;

@interface XRAbstractFileSystem : NSObject <XRFileSystem>
{
    NSMutableDictionary *_subEntriesByPath;
    NSMutableDictionary *_imagesByPath;
    BOOL _expandBundles;
    BOOL _showHiddenFiles;
    BOOL _fileContentsOnly;
    NSArray *_fixedPathsList;
}

@property(nonatomic) BOOL fileContentsOnly; // @synthesize fileContentsOnly=_fileContentsOnly;
@property(copy, nonatomic) NSArray *fixedPathsList; // @synthesize fixedPathsList=_fixedPathsList;
@property(nonatomic) BOOL showHiddenFiles; // @synthesize showHiddenFiles=_showHiddenFiles;
@property(nonatomic) BOOL expandBundles; // @synthesize expandBundles=_expandBundles;
- (void).cxx_destruct;
- (BOOL)isItemExpandable:(id)arg1;
- (id)_internalFaultImageForEntry:(id)arg1;
- (id)faultImageForEntry:(id)arg1;
- (id)faultChildrenForEntry:(id)arg1;
- (id)imageForEntry:(id)arg1;
- (id)childrenForEntry:(id)arg1;
- (void)_invalidateCaches;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

