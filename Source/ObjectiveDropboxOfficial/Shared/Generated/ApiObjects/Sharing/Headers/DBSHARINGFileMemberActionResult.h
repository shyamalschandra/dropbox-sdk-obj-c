///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBSHARINGFileMemberActionIndividualResult;
@class DBSHARINGFileMemberActionResult;
@class DBSHARINGMemberSelector;

#pragma mark - API Object

///
/// The `FileMemberActionResult` struct.
///
/// Per-member result for `addFileMember` or `changeFileMemberAccess`.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGFileMemberActionResult : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// One of specified input members.
@property (nonatomic, readonly) DBSHARINGMemberSelector * _Nonnull member;

/// The outcome of the action on this member.
@property (nonatomic, readonly) DBSHARINGFileMemberActionIndividualResult * _Nonnull result;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param member One of specified input members.
/// @param result The outcome of the action on this member.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithMember:(DBSHARINGMemberSelector * _Nonnull)member
                                result:(DBSHARINGFileMemberActionIndividualResult * _Nonnull)result;

- (nonnull instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `FileMemberActionResult` struct.
///
@interface DBSHARINGFileMemberActionResultSerializer : NSObject

///
/// Serializes `DBSHARINGFileMemberActionResult` instances.
///
/// @param instance An instance of the `DBSHARINGFileMemberActionResult` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGFileMemberActionResult` API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBSHARINGFileMemberActionResult * _Nonnull)instance;

///
/// Deserializes `DBSHARINGFileMemberActionResult` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGFileMemberActionResult` API object.
///
/// @return An instantiation of the `DBSHARINGFileMemberActionResult` object.
///
+ (DBSHARINGFileMemberActionResult * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
