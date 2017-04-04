///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBFILESListFolderLongpollResult;

#pragma mark - API Object

///
/// The `ListFolderLongpollResult` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESListFolderLongpollResult : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Indicates whether new changes are available. If true, call
/// `listFolderContinue` to retrieve the changes.
@property (nonatomic, readonly) NSNumber * _Nonnull changes;

/// If present, backoff for at least this many seconds before calling
/// `listFolderLongpoll` again.
@property (nonatomic, readonly) NSNumber * _Nullable backoff;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param changes Indicates whether new changes are available. If true, call
/// `listFolderContinue` to retrieve the changes.
/// @param backoff If present, backoff for at least this many seconds before
/// calling `listFolderLongpoll` again.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithChanges:(NSNumber * _Nonnull)changes backoff:(NSNumber * _Nullable)backoff;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param changes Indicates whether new changes are available. If true, call
/// `listFolderContinue` to retrieve the changes.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithChanges:(NSNumber * _Nonnull)changes;

- (nonnull instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `ListFolderLongpollResult` struct.
///
@interface DBFILESListFolderLongpollResultSerializer : NSObject

///
/// Serializes `DBFILESListFolderLongpollResult` instances.
///
/// @param instance An instance of the `DBFILESListFolderLongpollResult` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESListFolderLongpollResult` API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBFILESListFolderLongpollResult * _Nonnull)instance;

///
/// Deserializes `DBFILESListFolderLongpollResult` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESListFolderLongpollResult` API object.
///
/// @return An instantiation of the `DBFILESListFolderLongpollResult` object.
///
+ (DBFILESListFolderLongpollResult * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
