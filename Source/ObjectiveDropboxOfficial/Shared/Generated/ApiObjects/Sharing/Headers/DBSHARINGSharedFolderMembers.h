///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBSHARINGGroupMembershipInfo;
@class DBSHARINGInviteeMembershipInfo;
@class DBSHARINGSharedFolderMembers;
@class DBSHARINGUserMembershipInfo;

#pragma mark - API Object

///
/// The `SharedFolderMembers` struct.
///
/// Shared folder user and group membership.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGSharedFolderMembers : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The list of user members of the shared folder.
@property (nonatomic, readonly) NSArray<DBSHARINGUserMembershipInfo *> * _Nonnull users;

/// The list of group members of the shared folder.
@property (nonatomic, readonly) NSArray<DBSHARINGGroupMembershipInfo *> * _Nonnull groups;

/// The list of invitees to the shared folder.
@property (nonatomic, readonly) NSArray<DBSHARINGInviteeMembershipInfo *> * _Nonnull invitees;

/// Present if there are additional shared folder members that have not been
/// returned yet. Pass the cursor into `listFolderMembersContinue` to list
/// additional members.
@property (nonatomic, readonly) NSString * _Nullable cursor;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param users The list of user members of the shared folder.
/// @param groups The list of group members of the shared folder.
/// @param invitees The list of invitees to the shared folder.
/// @param cursor Present if there are additional shared folder members that
/// have not been returned yet. Pass the cursor into `listFolderMembersContinue`
/// to list additional members.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithUsers:(NSArray<DBSHARINGUserMembershipInfo *> * _Nonnull)users
                               groups:(NSArray<DBSHARINGGroupMembershipInfo *> * _Nonnull)groups
                             invitees:(NSArray<DBSHARINGInviteeMembershipInfo *> * _Nonnull)invitees
                               cursor:(NSString * _Nullable)cursor;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param users The list of user members of the shared folder.
/// @param groups The list of group members of the shared folder.
/// @param invitees The list of invitees to the shared folder.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithUsers:(NSArray<DBSHARINGUserMembershipInfo *> * _Nonnull)users
                               groups:(NSArray<DBSHARINGGroupMembershipInfo *> * _Nonnull)groups
                             invitees:(NSArray<DBSHARINGInviteeMembershipInfo *> * _Nonnull)invitees;

- (nonnull instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `SharedFolderMembers` struct.
///
@interface DBSHARINGSharedFolderMembersSerializer : NSObject

///
/// Serializes `DBSHARINGSharedFolderMembers` instances.
///
/// @param instance An instance of the `DBSHARINGSharedFolderMembers` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGSharedFolderMembers` API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBSHARINGSharedFolderMembers * _Nonnull)instance;

///
/// Deserializes `DBSHARINGSharedFolderMembers` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGSharedFolderMembers` API object.
///
/// @return An instantiation of the `DBSHARINGSharedFolderMembers` object.
///
+ (DBSHARINGSharedFolderMembers * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
