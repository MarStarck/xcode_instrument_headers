//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, XR_CSKFilter, XR_CSKMenu, XR_CSKTokenFieldController;

@protocol XR_CSKTokenFieldControllerDelegate <NSObject>

@optional
- (void)tokenFieldController:(XR_CSKTokenFieldController *)arg1 globalOperatorDidChange:(int)arg2;
- (void)tokenFieldController:(XR_CSKTokenFieldController *)arg1 basicSearchDidUpdateWithTerm:(NSString *)arg2;
- (void)tokenFieldController:(XR_CSKTokenFieldController *)arg1 filtersDidUpdate:(NSArray *)arg2;
- (void)tokenFieldController:(XR_CSKTokenFieldController *)arg1 filter:(XR_CSKFilter *)arg2 configureMenu:(XR_CSKMenu *)arg3;
- (NSArray *)tokenFieldController:(XR_CSKTokenFieldController *)arg1 menuItemsForFilter:(XR_CSKFilter *)arg2;
@end
