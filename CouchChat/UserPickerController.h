//
//  UserPickerController.h
//  CouchChat
//
//  Created by Jens Alfke on 3/4/13.
//  Copyright (c) 2013 Couchbase. All rights reserved.
//

#import "THContactPickerViewController.h"
#import "UserProfile.h"
@protocol UserPickerControllerDelegate;

// Declare that UserProfile implements the THContact protocol.
@interface UserProfile () <THContact>
@end


@interface UserPickerController : THContactPickerViewController

- (id) initWithUsers: (NSArray*)users
            delegate: (id<UserPickerControllerDelegate>)delegate;

@end


@protocol UserPickerControllerDelegate <NSObject>

- (void) userPickerController: (UserPickerController*)controller
                  pickedUsers: (NSArray*)users;

@end
