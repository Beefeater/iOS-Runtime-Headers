/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOUserSession : NSObject {
    struct { 
        unsigned long long _high; 
        unsigned long long _low; 
    struct { 
        unsigned long long _high; 
        unsigned long long _low; 
    double _sessionCreationTime;
    } _sessionID;
    } _usageCollectionSessionID;
    double _usageSessionIDGenerationTime;
}

@property(readonly) double sessionCreationTime;
@property(readonly) struct { unsigned long long x1; unsigned long long x2; } sessionID;
@property(readonly) struct { unsigned long long x1; unsigned long long x2; } usageCollectionSessionID;

+ (void)disable;
+ (id)sharedInstance;

- (void)_renewUsageCollectionSessionID;
- (void)_updateWithNewUUIDForSessionID:(struct { unsigned long long x1; unsigned long long x2; }*)arg1;
- (void)dealloc;
- (id)init;
- (double)sessionCreationTime;
- (struct { unsigned long long x1; unsigned long long x2; })sessionID;
- (struct { unsigned long long x1; unsigned long long x2; })usageCollectionSessionID;

@end
