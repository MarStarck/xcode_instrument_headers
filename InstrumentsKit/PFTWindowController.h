//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "DTTimelineGraphDelegate.h"
#import "NSPopoverDelegate.h"
#import "NSSplitViewDelegate.h"
#import "NSWindowDelegate.h"
#import "XRContextContainer.h"
#import "XRLazyKVOResponder.h"
#import "XRUIModelChangeObserver.h"

@class DTTimelineDecoratedPlane, DTTimelineGroupPlane, DVTBorderedView, NSClipView, NSLayoutConstraint, NSMapTable, NSMutableDictionary, NSOperation, NSPopover, NSScrollView, NSSet, NSSplitViewController, NSStackView, NSString, NSTabView, NSView, NSViewController, PFTDataView, PFTDataViewer, PFTDetailTypeHostView, PFTLegacySearchTokenTextField, PFTSelectedEventDataElementList, PFTStatusBarFilterButton, PFTTimelinePinningSplitView, PFTTraceDocument, XRCallTreeCompareBarViewController, XRConsoleControl, XRContext, XRContextPathControl, XRElementSetModel, XRFlagDecorator, XRInspectionHeadDecorator, XRLazyKVOAdapter, XRLibraryPopoverViewController, XRMainWindowUIState, XRMainWindowUserInterfaceControlMode, XRModalViewController, XRNonInteractiveModeViewController, XRPlaceholderView, XRProcessAndThreadListModel, XRRunIssuesViewController, XRStrategiesToolbarViewController, XRThreadFilterViewController, XRThreadListLimiter, XRThreadStrategyController, XRTimelineGraph, XRTrackAndDetailSplitViewController;

@interface PFTWindowController : NSWindowController <NSPopoverDelegate, XRUIModelChangeObserver, NSWindowDelegate, XRContextContainer, DTTimelineGraphDelegate, XRLazyKVOResponder, NSSplitViewDelegate>
{
    BOOL _strategyToolbarOpen;
    BOOL _inTimeSelectionGesture;
    XRCallTreeCompareBarViewController *_callTreeCompareBarViewController;
    NSMapTable *_observationsByContextByObj;
    NSMutableDictionary *_strategyUIControllersByIdentifier;
    XRLazyKVOAdapter *_observationAdapter;
    unsigned long long _lastForcedInspectionHeadUpdateTime;
    unsigned long long _lastEventHorizonUpdate;
    BOOL _inspectionHeadMovedByRecordingUpdate;
    PFTStatusBarFilterButton *_inputFilterButton;
    DTTimelineDecoratedPlane *_flagPlane;
    DTTimelineDecoratedPlane *_inspectionHeadPlane;
    XRFlagDecorator *_flagDecorator;
    XRInspectionHeadDecorator *_inspectionHeadDecorator;
    XRTimelineGraph *_mostRecentlySelectedGraph;
    DTTimelineGroupPlane *_rulerGroupPlane;
    BOOL _somethingNeedsRefresh;
    BOOL _firstResponderNeedsRefresh;
    BOOL _trackNeedsRefresh;
    BOOL _strategiesNeedRefresh;
    BOOL _strategyToolbarChanged;
    BOOL _detailContextChanged;
    BOOL _detailContextNeedsDisplay;
    BOOL _flagsNeedRefresh;
    BOOL _windowLayoutNeedsRefresh;
    BOOL _inspectionChanged;
    BOOL _inputFilterChanged;
    BOOL _runChanged;
    XRContext *_consoleContext;
    XRContext *_issuesContext;
    id _keyFlagMonitor;
    NSPopover *_threadsPopOver;
    XRThreadFilterViewController *_threadFilterController;
    XRProcessAndThreadListModel *_knownProcessesAndThreads;
    XRProcessAndThreadListModel *_restrictedProcessesAndThreads;
    XRThreadListLimiter *_limiter;
    XRElementSetModel *_includedThreads;
    NSOperation *_updateStrategyControllerOp;
    long long _mySelectedRunNumber;
    BOOL _hasEnabledInputFilter;
    NSView *_controlBarView;
    NSView *_inspectorChooserView;
    NSTabView *_inspectorTabView;
    PFTDataViewer *_inspectorDataViewer;
    PFTLegacySearchTokenTextField *_detailSearchField;
    PFTDetailTypeHostView *_detailHost;
    NSView *_navigationView;
    XRContextPathControl *_contextPathControl;
    DVTBorderedView *_filterBorderedView;
    NSScrollView *_filterScrollView;
    NSClipView *_filterClipView;
    PFTDataView *_filterDataView;
    DVTBorderedView *_detailSearchBorder;
    NSStackView *_filtersStackView;
    XRTimelineGraph *_nonPinnedTimelineGraph;
    XRTimelineGraph *_pinnedTimelineGraph;
    XRContext *_rootContext;
    XRMainWindowUIState *_state;
    XRMainWindowUserInterfaceControlMode *_mode;
    NSSet *_currentStrategyIdentifiers;
    id <XRToolbarManager> _toolbarManager;
    XRStrategiesToolbarViewController *_strategiesToolbarViewController;
    XRThreadStrategyController *_observedThreadStrategyController;
    XRPlaceholderView *_strategyToolbarHost;
    NSView *_normalContentView;
    NSLayoutConstraint *_strategyToolbarHeightConstraint;
    DVTBorderedView *_belowToolbarBorderedView;
    PFTSelectedEventDataElementList *_extendedDetailModel;
    XRModalViewController *_windowContentController;
    NSViewController *_interactiveUIController;
    XRNonInteractiveModeViewController *_nonInteractiveUIController;
    NSViewController *_trackViewController;
    NSViewController *_detailInspectorViewController;
    NSView *_detailView;
    NSViewController *_detailViewController;
    PFTDataViewer *_inspectorView;
    NSViewController *_inspectorViewController;
    XRConsoleControl *_consoleView;
    XRRunIssuesViewController *_issuesViewController;
    PFTTimelinePinningSplitView *_pinningSplitView;
    XRTrackAndDetailSplitViewController *_trackDetailSplitViewController;
    NSSplitViewController *_detailSplitViewController;
    XRLibraryPopoverViewController *_libraryPopoverViewController;
}

@property(retain, nonatomic) XRLibraryPopoverViewController *libraryPopoverViewController; // @synthesize libraryPopoverViewController=_libraryPopoverViewController;
@property(readonly, nonatomic) NSSplitViewController *detailSplitViewController; // @synthesize detailSplitViewController=_detailSplitViewController;
@property(readonly, nonatomic) XRTrackAndDetailSplitViewController *trackDetailSplitViewController; // @synthesize trackDetailSplitViewController=_trackDetailSplitViewController;
@property __weak PFTTimelinePinningSplitView *pinningSplitView; // @synthesize pinningSplitView=_pinningSplitView;
@property(retain, nonatomic) XRRunIssuesViewController *issuesViewController; // @synthesize issuesViewController=_issuesViewController;
@property(retain, nonatomic) XRConsoleControl *consoleView; // @synthesize consoleView=_consoleView;
@property(readonly, nonatomic) NSViewController *inspectorViewController; // @synthesize inspectorViewController=_inspectorViewController;
@property(retain, nonatomic) PFTDataViewer *inspectorView; // @synthesize inspectorView=_inspectorView;
@property(readonly, nonatomic) NSViewController *detailViewController; // @synthesize detailViewController=_detailViewController;
@property(retain, nonatomic) NSView *detailView; // @synthesize detailView=_detailView;
@property(readonly, nonatomic) NSViewController *detailInspectorViewController; // @synthesize detailInspectorViewController=_detailInspectorViewController;
@property(readonly, nonatomic) NSViewController *trackViewController; // @synthesize trackViewController=_trackViewController;
@property(readonly, nonatomic) XRNonInteractiveModeViewController *nonInteractiveUIController; // @synthesize nonInteractiveUIController=_nonInteractiveUIController;
@property(readonly, nonatomic) NSViewController *interactiveUIController; // @synthesize interactiveUIController=_interactiveUIController;
@property(readonly, nonatomic) XRModalViewController *windowContentController; // @synthesize windowContentController=_windowContentController;
@property(readonly) PFTSelectedEventDataElementList *extendedDetailModel; // @synthesize extendedDetailModel=_extendedDetailModel;
@property __weak DVTBorderedView *belowToolbarBorderedView; // @synthesize belowToolbarBorderedView=_belowToolbarBorderedView;
@property __weak NSLayoutConstraint *strategyToolbarHeightConstraint; // @synthesize strategyToolbarHeightConstraint=_strategyToolbarHeightConstraint;
@property(nonatomic) BOOL hasEnabledInputFilter; // @synthesize hasEnabledInputFilter=_hasEnabledInputFilter;
@property(retain) NSView *normalContentView; // @synthesize normalContentView=_normalContentView;
@property __weak XRPlaceholderView *strategyToolbarHost; // @synthesize strategyToolbarHost=_strategyToolbarHost;
@property __weak XRThreadStrategyController *observedThreadStrategyController; // @synthesize observedThreadStrategyController=_observedThreadStrategyController;
@property(retain, nonatomic) XRStrategiesToolbarViewController *strategiesToolbarViewController; // @synthesize strategiesToolbarViewController=_strategiesToolbarViewController;
@property(retain, nonatomic) id <XRToolbarManager> toolbarManager; // @synthesize toolbarManager=_toolbarManager;
@property(retain, nonatomic) NSSet *currentStrategyIdentifiers; // @synthesize currentStrategyIdentifiers=_currentStrategyIdentifiers;
@property(retain, nonatomic) XRMainWindowUserInterfaceControlMode *mode; // @synthesize mode=_mode;
@property(copy, nonatomic) XRMainWindowUIState *state; // @synthesize state=_state;
@property(retain) XRContext *issuesContext; // @synthesize issuesContext=_issuesContext;
@property(retain) XRContext *consoleContext; // @synthesize consoleContext=_consoleContext;
@property(retain) XRContext *rootContext; // @synthesize rootContext=_rootContext;
@property __weak XRTimelineGraph *pinnedTimelineGraph; // @synthesize pinnedTimelineGraph=_pinnedTimelineGraph;
@property __weak XRTimelineGraph *nonPinnedTimelineGraph; // @synthesize nonPinnedTimelineGraph=_nonPinnedTimelineGraph;
@property __weak NSStackView *filtersStackView; // @synthesize filtersStackView=_filtersStackView;
@property __weak DVTBorderedView *detailSearchBorder; // @synthesize detailSearchBorder=_detailSearchBorder;
@property __weak PFTDataView *filterDataView; // @synthesize filterDataView=_filterDataView;
@property __weak NSClipView *filterClipView; // @synthesize filterClipView=_filterClipView;
@property __weak NSScrollView *filterScrollView; // @synthesize filterScrollView=_filterScrollView;
@property __weak DVTBorderedView *filterBorderedView; // @synthesize filterBorderedView=_filterBorderedView;
@property __weak XRContextPathControl *contextPathControl; // @synthesize contextPathControl=_contextPathControl;
@property __weak NSView *navigationView; // @synthesize navigationView=_navigationView;
@property __weak PFTDetailTypeHostView *detailHost; // @synthesize detailHost=_detailHost;
@property __weak PFTLegacySearchTokenTextField *detailSearchField; // @synthesize detailSearchField=_detailSearchField;
@property(retain) PFTDataViewer *inspectorDataViewer; // @synthesize inspectorDataViewer=_inspectorDataViewer;
@property(nonatomic) __weak NSTabView *inspectorTabView; // @synthesize inspectorTabView=_inspectorTabView;
@property(nonatomic) __weak NSView *inspectorChooserView; // @synthesize inspectorChooserView=_inspectorChooserView;
@property(nonatomic) __weak NSView *controlBarView; // @synthesize controlBarView=_controlBarView;
@property(readonly, nonatomic) NSMutableDictionary *strategyUIControllersByIdentifier; // @synthesize strategyUIControllersByIdentifier=_strategyUIControllersByIdentifier;
- (void).cxx_destruct;
- (void)modelDidChange:(id)arg1;
- (void)popoverDidClose:(id)arg1;
- (void)updateSelectedRun;
- (void)updateThreadsAndProcesses;
- (void)excludeThreads:(id)arg1;
- (void)includeThreads:(id)arg1;
- (void)_restoreThreads;
- (void)_backupIncludedThreads;
- (void)_updateStrategyControllerThreads;
- (void)restrictThreadToContainString:(id)arg1;
- (void)restrictThreadList:(id)arg1;
- (void)_clearFilterAction:(id)arg1;
- (void)handleLazyKVOUpdate:(id)arg1;
- (void)_unhideSelectionForController:(id)arg1;
- (void)_refreshPass;
- (void)_observeNewStrategyControllers:(id)arg1;
- (double)splitView:(id)arg1 constrainSplitPosition:(double)arg2 ofSubviewAt:(long long)arg3;
- (BOOL)splitView:(id)arg1 canCollapseSubview:(id)arg2;
- (BOOL)splitView:(id)arg1 shouldHideDividerAtIndex:(long long)arg2;
- (BOOL)windowShouldClose:(id)arg1;
- (struct CGRect)window:(id)arg1 willPositionSheet:(id)arg2 usingRect:(struct CGRect)arg3;
- (void)setupToolbar;
- (void)_makeInputFilterVisible:(BOOL)arg1;
- (void)_inputFilterButtonClicked:(id)arg1;
- (void)checkpointUI;
- (id)archiveStrategyUIControllerStates;
- (void)unhideStrategyToolbarForWatermark;
- (void)hideStrategyToolbarForWatermark;
- (void)setStrategySummaryFilter:(id)arg1;
- (void)setStrategyToolbarVisible:(BOOL)arg1;
- (void)_updateInputFilterState;
- (void)documentIsClosing;
- (id)pinItem:(id)arg1 options:(unsigned long long)arg2;
- (id)allStrategyUIController;
- (BOOL)canModifySettingsForCurrentTrack;
- (void)documentDidUpdateFilterForRunNumber:(long long)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)callTreeMine:(id)arg1;
- (void)toggleExtendedDetail:(id)arg1;
- (void)performFindPanelAction:(id)arg1;
- (void)setSidebarState:(unsigned long long)arg1;
- (void)closeDetailView;
- (void)openDetailView;
- (id)searchCriteria;
- (void)toggleDetail:(id)arg1;
- (void)addCriteriaToSearchField:(id)arg1;
- (void)_openDataView;
- (id)iconForContext:(id)arg1;
- (id)contextContainerForUUID:(id)arg1;
- (id)viewForContext:(id)arg1;
- (id)siblingsForContext:(id)arg1;
- (id)splitterContext;
- (void)_respondToDisplayedContextChange;
- (void)displayContext:(id)arg1;
- (id)contextRepresentation;
- (id)uuid;
- (id)strategyDetailsContext;
- (void)inspectFlag:(id)arg1;
- (void)removeFlag:(id)arg1;
- (void)addFlagToRecording:(id)arg1;
- (void)nextFlag:(id)arg1;
- (void)prevFlag:(id)arg1;
- (id)_inspectionCursor;
- (void)recordingStarted;
- (void)_coreSpaceNotification:(id)arg1;
- (void)setSelection:(id)arg1 strategy:(struct NSString *)arg2;
- (id)_pinnedStrategyUI;
- (id)_selectedStrategyUI;
- (void)inputHandlerForGraph:(id)arg1 didReorderPlane:(id)arg2 afterPlane:(id)arg3 withParent:(id)arg4;
- (BOOL)inputHandlerForGraph:(id)arg1 canReorderPlane:(id)arg2 afterPlane:(id)arg3 withParent:(id)arg4;
- (BOOL)inputHandlerForGraph:(id)arg1 requestsReorderingPlane:(id)arg2;
- (void)inputHandlerRequestsToClearZoomIndicatorForGraph:(id)arg1;
- (void)inputHandlerForGraph:(id)arg1 requestsZoomOutIndicatorForTimeRange:(struct XRTimeRange)arg2;
- (void)inputHandlerForGraph:(id)arg1 requestsZoomInIndicatorForTimeRange:(struct XRTimeRange)arg2;
- (void)inputHandlerForGraph:(id)arg1 requestsDisplayInspectionInfoForNanosecond:(unsigned long long)arg2 point:(struct CGPoint)arg3;
- (void)inputHandlerForGraph:(id)arg1 requestsHeight:(double)arg2 forPlane:(id)arg3;
- (void)inputHandlerForGraph:(id)arg1 requestsCollapsingGroupPlane:(id)arg2;
- (void)inputHandlerForGraph:(id)arg1 requestsExpandingGroupPlane:(id)arg2;
- (void)inputHandlerForGraph:(id)arg1 requestsEndLongPressDragAtTime:(unsigned long long)arg2;
- (void)inputHandlerForGraph:(id)arg1 requestsLongPressDragToTime:(unsigned long long)arg2;
- (BOOL)inputHandlerForGraph:(id)arg1 requestsLongPressDragBeginAtTime:(unsigned long long)arg2 onPlanes:(id)arg3;
- (void)inputHandlerForGraph:(id)arg1 unhandledClickAtTime:(unsigned long long)arg2 clickCount:(long long)arg3 onPlanes:(id)arg4;
- (void)inputHandlerForGraph:(id)arg1 accessoryClickedOnPlane:(id)arg2 relativeRect:(struct CGRect)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_unpinItem:(id)arg1;
- (id)_pinItem:(id)arg1 options:(unsigned long long)arg2;
- (id)_pinItem:(id)arg1;
- (id)_focusedUIController;
- (id)_currentStrategyControllerForGraph:(id)arg1;
- (void)inputHandlerForGraph:(id)arg1 iconClickedOnPlane:(id)arg2 relativeRect:(struct CGRect)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)inputHandlerForGraph:(id)arg1 glyphClickedAt:(unsigned long long)arg2 onPlane:(id)arg3 relativeRect:(struct CGRect)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)inputHandlerRequestsToClearCurrentInspectionTimeForGraph:(id)arg1;
- (void)inputHandlerRequestsToClearInspectionInfoForGraph:(id)arg1;
- (void)inputHandlerForGraph:(id)arg1 requestsNanosecondsPerPoint:(unsigned long long)arg2;
- (void)inputHandlerForGraph:(id)arg1 requestsCurrentInspectionTime:(unsigned long long)arg2;
- (void)inputHandlerRequestsToClearSelectedTimeRangeForGraph:(id)arg1;
- (void)inputHandlerDidFinishSelectionForGraph:(id)arg1;
- (void)inputHandlerForGraph:(id)arg1 requestsSelectedTimeRange:(struct XRTimeRange)arg2;
- (void)inputHandlerForGraph:(id)arg1 requestYOffset:(double)arg2;
- (void)inputHandlerForGraph:(id)arg1 requestsNanosecondOffset:(long long)arg2;
- (void)setupTrackPinningGraphs;
- (void)_updatePinnedGraphHidden:(BOOL)arg1 minimumHeight:(double)arg2;
- (double)_halfOfGraphableAreaSplitterLocation;
- (void)withBothGraphs:(CDUnknownBlockType)arg1;
- (void)toggleLibrary:(id)arg1;
- (id)_libraryButton;
- (void)spaceBarEvent:(id)arg1;
- (void)clearPinnedTracks:(id)arg1;
- (void)togglePinSelectedTrack:(id)arg1;
- (void)pinFilteredTracks:(id)arg1;
- (void)togglePinnedGraph:(id)arg1;
- (void)recordingOptions:(id)arg1;
- (void)deleteRun:(id)arg1;
- (void)deleteInstrument:(id)arg1;
- (void)editInstrument:(id)arg1;
- (void)_editInstrumentInstance:(id)arg1;
- (id)_modalEditorViewControllerForDataElement:(id)arg1 instrument:(id)arg2;
- (void)showRunInfo:(id)arg1;
- (void)showExtendedDetail:(id)arg1;
- (void)callTreeCompare:(id)arg1;
- (void)fullScreenAction:(id)arg1;
- (void)toggleTrackSettingsForSelectedTrack;
- (void)zoomOut:(id)arg1;
- (void)zoomIn:(id)arg1;
- (void)_applyZoomScaleAction:(double)arg1;
- (void)autoUpdateInspectionHead:(id)arg1;
- (void)scaleToFitInspectionRange:(id)arg1;
- (void)snapTrackViewToFit:(id)arg1;
- (void)recordTrace:(id)arg1;
@property(readonly) unsigned long long scaleNeededForSnapTrackViewToFit;
@property(readonly, nonatomic) __weak PFTTraceDocument *traceDocument;
- (void)windowWillClose:(id)arg1;
- (void)setDocument:(id)arg1;
- (void)_bootstrapStrategyControllerMode:(id)arg1;
- (BOOL)shouldCloseDocument;
- (id)windowTitleForDocumentDisplayName:(id)arg1;
- (void)filterViewBoundsDidChange:(id)arg1;
- (void)_updateFilterViewBorder;
- (void)restorePinnedState;
- (void)windowDidLoad;
- (void)_setupProcessThreadFilter;
- (void)dealloc;
- (id)initWithWindow:(id)arg1;
- (id)touchBarController;
- (id)makeTouchBar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
