/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SportsVoices.framework/SportsVoices
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface SWUtils : XXUnknownSuperclass {
}
+(id)__dateStringForDate:(id)date;
+(void)setShouldLogToFilesInDirectory:(id)logToFilesInDirectory;
+(void)setShouldUseNikeAppPreferenceKeyForLogging:(BOOL)useNikeAppPreferenceKeyForLogging;
+(void)log:(id)log;
+(void)forDefault:(id)aDefault log:(id)log;
+(void)__logToFileForMessageType:(id)messageType message:(id)message arguments:(void*)arguments;
+(void)resetLogs;
+(BOOL)nikeUserDefaultsBoolForKey:(id)key;
+(id)nikeUserDefaultsStringForKey:(id)key;
+(id)nikeUserDefaultsNumberForKey:(id)key;
+(void)nikeUserDefaultsSetString:(id)string forKey:(id)key;
+(void)nikeUserDefaultsRemoveObjectForKey:(id)key;
+(void)ensureDirectoryExists:(id)exists;
@end
