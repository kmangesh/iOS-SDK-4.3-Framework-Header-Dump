/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSFaultHandler.h"


__attribute__((visibility("hidden")))
@interface _NSInvalidationFaultHandler : NSFaultHandler {
}
+(id)defaultHandler;
-(void)fulfillFault:(id)fault withContext:(id)context;
-(id)fulfillAggregateFaultForObject:(id)object andRelationship:(id)relationship withContext:(id)context;
-(void)turnObject:(id)object intoFaultWithContext:(id)context;
@end

