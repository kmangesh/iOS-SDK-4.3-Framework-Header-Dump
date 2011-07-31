/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import "IMCore-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "IMService.h"


@interface IMService : XXUnknownSuperclass {
}
+(void)forgetStatusImageAppearance;
+(id)imageNameForStatus:(unsigned)status;
+(id)imageURLForStatus:(unsigned)status;
+(id)allServices;
+(id)allServicesNonBlocking;
+(id)serviceWithNameNonBlocking:(id)nameNonBlocking;
+(id)serviceWithName:(id)name;
+(id)notificationCenter;
+(unsigned)myStatus;
+(id)myIdleTime;
+(BOOL)isEmailAddress:(id)address inDomains:(id)domains;
+(unsigned)statusForIMPerson:(id)imperson;
+(unsigned)statusForABPerson:(id)abperson;
+(id)canonicalFormOfID:(id)anId withIDSensitivity:(int)idsensitivity;
-(id)copyWithZone:(NSZone*)zone;
-(BOOL)isEnabled;
-(void)login;
-(void)logout;
-(BOOL)initialSyncPerformed;
-(id)localizedName;
-(id)localizedShortName;
-(id)name;
-(unsigned)status;
-(id)infoForScreenName:(id)screenName;
-(id)infoForAllScreenNames;
-(id)infoForPreferredScreenNames;
-(id)canonicalFormOfID:(id)anId;
-(id)peopleWithScreenName:(id)screenName;
-(id)screenNamesForPerson:(id)person;
-(id)myScreenNames;
@end

@interface IMService (Deprecated)
-(id)infoForPerson:(id)person;
-(id)infoForAllPeople;
-(id)infoForDisplayedPeople;
@end

@interface IMService (IMService_GetService)
+(id)aimService;
+(id)subnetService;
+(id)jabberService;
+(id)facetimeService;
@end
