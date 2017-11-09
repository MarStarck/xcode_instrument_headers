//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <InstrumentsPlugIn/XRDevice.h>

#import "DTProcessControlObserver.h"
#import "XRRemoteDeviceAuthorizedAPI.h"

@class DTXChannel, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSString;

@interface XRRemoteDevice : XRDevice <XRRemoteDeviceAuthorizedAPI, DTProcessControlObserver>
{
    struct __CFDictionary *_activeSymbolicators;
    struct _CSTypeRef _kernelSymbolicator;
    NSObject<OS_dispatch_queue> *_activeSymbolicatorQueue;
    NSObject<OS_dispatch_semaphore> *_outstandingAppRequest;
    NSMutableDictionary *_userIdMap;
    NSMutableArray *_pidsLaunchedPosixStyle;
    NSDictionary *_hardwareInfo;
    NSDictionary *_networkInterfaceInfo;
    NSMutableDictionary *_procIconMap;
    int _memoryConstraint;
    BOOL _supportsDTProcessControlServiceDictionaries;
    NSString *_activePairedWatchDeviceIdentifier;
    unsigned int _companionNameChangeNotificationToken;
    NSString *_wirelessServiceName;
    DTXChannel *_wirelessControlChannel;
    DTXChannel *_launchDaemonService;
    DTXChannel *_xpcLauncherService;
    DTXChannel *_defaultProcessControlChannel;
    DTXChannel *_posixProcessControlChannel;
    DTXChannel *_notificationsChannel;
    DTXChannel *_applicationChannel;
    DTXChannel *_companionControlChannel;
}

+ (void)initialize;
@property(retain) DTXChannel *companionControlChannel; // @synthesize companionControlChannel=_companionControlChannel;
@property(retain) DTXChannel *applicationChannel; // @synthesize applicationChannel=_applicationChannel;
@property(retain) DTXChannel *notificationsChannel; // @synthesize notificationsChannel=_notificationsChannel;
@property(retain) DTXChannel *posixProcessControlChannel; // @synthesize posixProcessControlChannel=_posixProcessControlChannel;
@property(retain) DTXChannel *defaultProcessControlChannel; // @synthesize defaultProcessControlChannel=_defaultProcessControlChannel;
@property(retain) DTXChannel *xpcLauncherService; // @synthesize xpcLauncherService=_xpcLauncherService;
@property(retain) DTXChannel *launchDaemonService; // @synthesize launchDaemonService=_launchDaemonService;
@property(retain) DTXChannel *wirelessControlChannel; // @synthesize wirelessControlChannel=_wirelessControlChannel;
@property(copy, nonatomic) NSString *wirelessServiceName; // @synthesize wirelessServiceName=_wirelessServiceName;
- (void).cxx_destruct;
- (id)queryCompanionForActiveWatchDeviceIdentifier;
- (id)activePairedWatchDeviceIdentifier;
- (void)willUnpairFromCompanion:(id)arg1;
- (void)didPairWithCompanion:(id)arg1;
- (void)handleNewRawDeviceDisplayName;
- (void)simulateMemoryWarning:(id)arg1;
- (id)targetControlDataElementsForProcess:(id)arg1;
- (id)launchControlDataElementsForProcess:(id)arg1;
- (void)outputReceived:(id)arg1 fromProcess:(int)arg2 atTime:(unsigned long long)arg3;
- (void)thermalLevelNotification:(id)arg1;
- (void)memoryLevelNotification:(id)arg1;
- (void)applicationStateNotification:(id)arg1;
- (unsigned long long)_traceRelativeTimestampForNotification:(id)arg1 inTrace:(id)arg2;
- (void)setMemoryConstraint:(int)arg1;
- (int)memoryConstraint;
- (id)_dtkpCPU:(id *)arg1;
- (id)_legacyKPEPDatabase;
- (id)_supportedKDebugEvents:(id *)arg1;
- (id)_loadTraceCodesFromResource:(id *)arg1;
- (id)displayNameForNetworkInterface:(id)arg1;
- (BOOL)supportsDeviceIO;
- (BOOL)daemonsSupported;
- (BOOL)legacyDaemonsSupported;
- (id)cpuDescription;
- (id)deviceArchitecture;
- (int)speedOfCpus;
- (int)numberOfPhysicalCpus;
- (int)numberOfCpus;
- (BOOL)resumeProcess:(id)arg1;
- (BOOL)suspendProcess:(id)arg1;
- (void)terminateProcess:(id)arg1;
- (int)launchProcess:(id)arg1 suspended:(BOOL)arg2 error:(id *)arg3;
- (BOOL)_companionLaunchNativeWatchKitProcess:(id)arg1 companionAppBundleIdentifier:(id)arg2 suspended:(BOOL)arg3 panel:(id)arg4 error:(id *)arg5;
- (void)pidDiedCallback:(id)arg1;
- (void)removeObserver:(id)arg1 forPid:(int)arg2;
- (void)addObserver:(id)arg1 forPid:(int)arg2;
- (BOOL)allowsChoosingExecutable;
- (void)dyldNotificationReceived:(id)arg1;
- (struct _CSTypeRef)createKernelSymbolicator;
- (BOOL)supportsKernelBacktracing;
- (struct _CSTypeRef)createSymbolicatorForPid:(int)arg1;
- (struct __CFSet *)_symbolicatorSetForPid:(int)arg1;
- (BOOL)executableIsRestricted:(id)arg1 launchOptions:(id)arg2;
- (BOOL)isRunningPid:(int)arg1;
- (id)execnameForPid:(int)arg1;
- (BOOL)currentDeviceTime:(struct _XRDeviceTimeInfo *)arg1;
- (id)userForUID:(id)arg1;
- (id)iconForAppPath:(id)arg1 executableName:(id)arg2;
- (void)_cacheFill:(id)arg1 executableName:(id)arg2 image:(id)arg3;
- (id)runningProcesses;
- (id)defaultAppIcon;
- (id)marketizedPlatformName;
- (id)platformName;
- (BOOL)updateInstalledExecutables;
- (id)fileSystem;
- (id)processControlServiceForPid:(int)arg1;
- (void)checkForSymbols;
- (void)xcodeWasTerminated:(unsigned int)arg1;
- (void)xcodeWasLaunched:(unsigned int)arg1;
- (void)symbolsDownloadedAtPath:(id)arg1;
- (BOOL)_checkForInfoPlistFileAtPath:(id)arg1;
- (BOOL)_checkForFinalizedFileAtPath:(id)arg1;
- (BOOL)_checkForSymbolFileLocksAtPath:(id)arg1;
- (id)externalSDKPath;
- (id)internalSDKPath;
- (id)baseSymbolsPath;
- (void)teardownConnection;
- (int)processControlServiceVersion;
- (void)prepareConnection:(id)arg1;
- (id)initWithTemplateData:(id)arg1;
- (id)templateData;
- (void)_overrideCapabilities:(id)arg1 withRecordOptionsVersion:(int)arg2;
- (BOOL)supportsProcessControlEventDictionaries;
- (void)preflightDevice;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
