//
//  GameCenterHelper.h
//  Template Penguin
//
//  Created by Akshay on 6/30/13.
//
//

#import <Foundation/Foundation.h>
#import <GameKit/GameKit.h>

@interface GameCenterHelper : NSObject {
    BOOL userAuthenticated;
    BOOL gameCenterAvailable; // Temporary
}

@property (assign, readonly) BOOL gameCenterAvailable;

+ (GameCenterHelper *)sharedInstance;
- (void)authenticateLocalUser;

@end
