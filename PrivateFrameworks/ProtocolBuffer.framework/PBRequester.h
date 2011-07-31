/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

#import "ProtocolBuffer-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSArray, PBDataReader, NSMutableData, NSURL, NSURLConnection, NSMutableArray, NSDictionary;
@protocol PBRequesterDelegate;

@interface PBRequester : XXUnknownSuperclass {
	NSURL* _URL;
	id<PBRequesterDelegate> _delegate;
	NSURLConnection* _connection;
	NSMutableData* _data;
	PBDataReader* _dataReader;
	unsigned _lastGoodDataOffset;
	unsigned _uploadPayloadSize;
	int _responseStatusCode;
	NSMutableArray* _requests;
	NSMutableArray* _responses;
	NSMutableArray* _internalRequests;
	NSMutableArray* _internalResponses;
	NSDictionary* _httpResponseHeaders;
	NSDictionary* _httpRequestHeaders;
	double _timeoutSeconds;
	CFRunLoopTimerRef _timeoutTimer;
	NSString* _logRequestToFile;
	NSString* _logResponseToFile;
	NSString* _logEncodedRequestToFile;
	NSString* _logEncodedResponseToFile;
	NSArray* _clientCertificates;
	BOOL _shouldHandleCookies;
	struct {
		unsigned ignoresResponse : 1;
		unsigned loading : 1;
		unsigned silentLoading : 1;
		unsigned needsCancel : 1;
		unsigned responseStatusSet : 1;
		unsigned parsedResponseHeader : 1;
		unsigned delegateDidReceiveResponse : 1;
		unsigned delegateDidFinish : 1;
		unsigned delegateDidCancel : 1;
		unsigned delegateDidFailWithError : 1;
		unsigned paused : 1;
		unsigned resuming : 1;
	} _flags;
}
@property(retain, nonatomic) NSURL* URL;
@property(assign, nonatomic) id delegate;
@property(retain, nonatomic) NSURLConnection* connection;
@property(retain, nonatomic) NSDictionary* httpResponseHeaders;
@property(retain, nonatomic) NSDictionary* httpRequestHeaders;
@property(assign, nonatomic) double timeoutSeconds;
@property(retain, nonatomic) NSString* logRequestToFile;
@property(retain, nonatomic) NSString* logResponseToFile;
@property(readonly, assign, nonatomic) unsigned uploadPayloadSize;
@property(retain, nonatomic) NSArray* clientCertificates;
@property(assign, nonatomic) BOOL shouldHandleCookies;
@property(assign) BOOL needsCancel;
@property(readonly, assign, nonatomic) NSArray* requests;
@property(assign, nonatomic) BOOL silentLoading;
@property(assign, nonatomic, getter=isLoading) BOOL loading;
@property(assign, nonatomic) BOOL ignoresResponse;
+(BOOL)usesEncodedMessages;
-(id)initWithURL:(id)url andDelegate:(id)delegate;
-(void)dealloc;
-(void)_cleanup;
-(void)setNeedsCancel;
-(void)addRequest:(id)request;
-(id)responseForRequest:(id)request;
-(id)internalRequests;
-(void)addInternalRequest:(id)request;
-(id)responseForInternalRequest:(id)internalRequest;
-(void)handleResponse:(id)response forInternalRequest:(id)internalRequest;
-(id)_languageLocale;
-(id)_applicationID;
-(id)_osVersion;
-(id)requestPreamble;
-(void)writeRequest:(id)request into:(id)into;
-(void)_sendPayload:(id)payload;
-(void)start;
-(void)cancel;
-(void)pause;
-(BOOL)isPaused;
-(void)resume;
-(void)_failWithError:(id)error;
-(void)_failWithErrorDomain:(id)errorDomain errorCode:(int)code userInfo:(id)info;
-(void)_cancelWithErrorDomain:(id)errorDomain errorCode:(int)code userInfo:(id)info;
-(void)cancelWithErrorCode:(int)errorCode;
-(BOOL)readResponsePreamble:(id)preamble;
-(id)tryReadResponseData:(id)data forRequest:(id)request forResponseClass:(Class)responseClass;
-(BOOL)_tryParseData;
-(void)connection:(id)connection didReceiveResponse:(id)response;
-(void)connection:(id)connection didReceiveData:(id)data;
-(void)connectionDidFinishLoading:(id)connection;
-(void)connection:(id)connection didFailWithError:(id)error;
-(void)_startTimeoutTimer;
-(void)_removeTimeoutTimer;
-(void)_resetTimeoutTimer;
-(void)_timeoutTimerFired;
-(void)encodeRequestData:(id)data startRequestCallback:(id)callback;
-(id)decodeResponseData:(id)data;
-(void)setLogEncodedRequestToFile:(id)file;
-(id)logEncodedRequestToFile;
-(void)setLogEncodedResponseToFile:(id)file;
-(id)logEncodedResponseToFile;
@end
