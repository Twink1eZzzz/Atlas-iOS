//
//  ATLUIParticipant.h
//  Atlas
//
//  Created by Kevin Coleman on 8/29/14.
//  Copyright (c) 2014 Layer, Inc. All rights reserved.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import <Foundation/Foundation.h>
#import <LayerKit/LayerKit.h>
#import "ATLAvatarItem.h"

NS_ASSUME_NONNULL_BEGIN
/**
 @abstract The `ATLParticipant` protocol must be adopted by objects wishing to represent Layer
 participants in the user interface.
 */
@protocol ATLParticipant <NSObject, ATLAvatarItem>

/**
 @abstract The first name of the participant as it should be presented in the user interface.
 */
@property (nonatomic, readonly) NSString *firstName;

/**
 @abstract The last name of the participant as it should be presented in the user interface.
 */
@property (nonatomic, readonly) NSString *lastName;

/**
 @abstract The full name of the participant as it should be presented in the user interface.
 */
@property (nonatomic, readonly) NSString *displayName;

/**
 @abstract The unique identifier of the participant as it should be used for Layer addressing.
 @discussion This identifier is issued by the Layer identity provider backend.
 */
@property (nonatomic, readonly) NSString *userID;

/**
 @abstract The presence status of the participant.
 */
@property (nonatomic, readonly) LYRIdentityPresenceStatus presenceStatus;

@end
NS_ASSUME_NONNULL_END
