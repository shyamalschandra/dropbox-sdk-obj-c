///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMListTeamAppsResult;
@class DBTEAMMemberLinkedApps;

#pragma mark - API Object

///
/// The `ListTeamAppsResult` struct.
///
/// Information returned by `linkedAppsListTeamLinkedApps`.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMListTeamAppsResult : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The linked applications of each member of the team
@property (nonatomic, readonly) NSArray<DBTEAMMemberLinkedApps *> * _Nonnull apps;

/// If true, then there are more apps available. Pass the cursor to
/// `linkedAppsListTeamLinkedApps` to retrieve the rest.
@property (nonatomic, readonly) NSNumber * _Nonnull hasMore;

/// Pass the cursor into `linkedAppsListTeamLinkedApps` to receive the next sub
/// list of team's applications.
@property (nonatomic, readonly) NSString * _Nullable cursor;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param apps The linked applications of each member of the team
/// @param hasMore If true, then there are more apps available. Pass the cursor
/// to `linkedAppsListTeamLinkedApps` to retrieve the rest.
/// @param cursor Pass the cursor into `linkedAppsListTeamLinkedApps` to receive
/// the next sub list of team's applications.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithApps:(NSArray<DBTEAMMemberLinkedApps *> * _Nonnull)apps
                             hasMore:(NSNumber * _Nonnull)hasMore
                              cursor:(NSString * _Nullable)cursor;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param apps The linked applications of each member of the team
/// @param hasMore If true, then there are more apps available. Pass the cursor
/// to `linkedAppsListTeamLinkedApps` to retrieve the rest.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithApps:(NSArray<DBTEAMMemberLinkedApps *> * _Nonnull)apps
                             hasMore:(NSNumber * _Nonnull)hasMore;

- (nonnull instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `ListTeamAppsResult` struct.
///
@interface DBTEAMListTeamAppsResultSerializer : NSObject

///
/// Serializes `DBTEAMListTeamAppsResult` instances.
///
/// @param instance An instance of the `DBTEAMListTeamAppsResult` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMListTeamAppsResult` API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBTEAMListTeamAppsResult * _Nonnull)instance;

///
/// Deserializes `DBTEAMListTeamAppsResult` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMListTeamAppsResult` API object.
///
/// @return An instantiation of the `DBTEAMListTeamAppsResult` object.
///
+ (DBTEAMListTeamAppsResult * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
