//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSMenuDelegate.h"

@class BCBonjourController, MSArtboardGroup, MSDocument, NSMenu, NSMutableDictionary, NSString;

@interface MSIOSConnectionController : NSObject <NSMenuDelegate>
{
    BOOL _hadActiveConnection;
    NSString *_lastUsedIP;
    BCBonjourController *_bonjourController;
    NSMenu *_connectionMenu;
    MSDocument *_currentDocument;
    MSArtboardGroup *_currentArtboard;
    unsigned long long _numberOfClientsKnownByUI;
    NSMutableDictionary *_artboardSequenceNumbers;
}

+ (BOOL)sketchPlayDebugEnabled;
+ (BOOL)sketchPlayEnabled;

- (void)addClientWithIP:(id)arg1 port:(unsigned long long)arg2;
- (void)artboardSelectedNotification:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *artboardSequenceNumbers; // @synthesize artboardSequenceNumbers=_artboardSequenceNumbers;
- (void)artboardsChangedNotification:(id)arg1;
@property(retain, nonatomic) BCBonjourController *bonjourController; // @synthesize bonjourController=_bonjourController;
- (void)clientsChangedNotification:(id)arg1;
- (void)connectAll:(id)arg1;
- (void)connectToClientAtIndex:(unsigned long long)arg1;
- (void)connectToDevice:(id)arg1;
@property(retain, nonatomic) NSMenu *connectionMenu; // @synthesize connectionMenu=_connectionMenu;
- (void)connectoToDefaultDeviceWithDocument:(id)arg1;
@property(retain, nonatomic) MSArtboardGroup *currentArtboard; // @synthesize currentArtboard=_currentArtboard;
@property(retain, nonatomic) MSDocument *currentDocument; // @synthesize currentDocument=_currentDocument;
- (void)dealloc;
- (id)dictionaryForArtboard:(id)arg1 page:(id)arg2 sequenceNumber:(id)arg3 scale:(id)arg4 boardSizeString:(id)arg5;
- (void)didShowNewDevices;
- (void)disconnectAll:(id)arg1;
- (void)documentChangedNotification:(id)arg1;
- (void)documentWillCloseNotification:(id)arg1;
@property(nonatomic) BOOL hadActiveConnection; // @synthesize hadActiveConnection=_hadActiveConnection;
- (void)handleCommandErrorWithReceiver:(id)arg1 message:(id)arg2;
- (void)handleCommandShowingWithReceiver:(id)arg1 message:(id)arg2;
- (void)handleCommandSystemWithReceiver:(id)arg1 message:(id)arg2;
- (BOOL)hasActiveConnections;
- (BOOL)hasClients;
- (BOOL)hasConnections;
- (BOOL)hasMultipleClients;
- (id)imageForClient:(unsigned long long)arg1;
- (id)incrementSequenceNumberForArtboard:(id)arg1;
- (id)init;
- (BOOL)isClientConnected:(unsigned long long)arg1;
@property(retain, nonatomic) NSString *lastUsedIP; // @synthesize lastUsedIP=_lastUsedIP;
- (void)listenForNotifications;
- (id)nameForClient:(unsigned long long)arg1;
- (unsigned long long)numberOfClients;
@property(nonatomic) unsigned long long numberOfClientsKnownByUI; // @synthesize numberOfClientsKnownByUI=_numberOfClientsKnownByUI;
- (void)pagesChangedNotification:(id)arg1;
- (unsigned long long)pixelLimitForDevice:(id)arg1;
- (void)populateConnectionMenu:(id)arg1;
- (void)refreshArtboards:(id)arg1;
- (void)resetArtboards:(id)arg1;
- (void)sendDebug:(id)arg1;
- (void)sendListOfPagesAndSlicesForDocument:(id)arg1;
- (void)sendSlice:(id)arg1 page:(id)arg2 artboard:(id)arg3;
- (void)setCurrentDocumentFromActionSender:(id)arg1;
- (void)setSketchPlayUsed;
- (void)setupBonjourController;
- (BOOL)showNewDevicesIndicatorInUI;
- (BOOL)sketchPlayUsed;
- (id)sliceSizeMetadataFromRect:(struct CGRect)arg1 slice:(id)arg2;
- (void)stopListeningForNotifications;
- (BOOL)validateMenuItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

