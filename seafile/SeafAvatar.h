//
//  SeafAvatar.h
//  seafilePro
//
//  Created by Wang Wei on 4/11/14.
//  Copyright (c) 2014 Seafile. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SeafConnection.h"

@interface SeafAvatar : NSObject<SeafDownloadDelegate>
- (id)initWithConnection:(SeafConnection *)aConnection from:(NSString *)url toPath:(NSString *)path;

+ (void)clearCache;

@end

@interface SeafUserAvatar : SeafAvatar
- (id)initWithConnection:(SeafConnection *)aConnection username:(NSString *)username;

+ (NSString *)pathForAvatar:(SeafConnection *)conn username:(NSString *)username;

@end

@interface SeafGroupAvatar : SeafAvatar
- (id)initWithConnection:(SeafConnection *)aConnection group:(NSString *)group_id
;

+ (NSString *)pathForAvatar:(SeafConnection *)conn group:(NSString *)group_id;

@end
