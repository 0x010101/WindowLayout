//
//  Layout.h
//  WindowLayout
//
//  Created by Single on 2016/11/21.
//  Copyright © 2016年 single. All rights reserved.
//

#import <Cocoa/Cocoa.h>

typedef NS_ENUM(NSInteger, SGWLLayoutAttribute)
{
    SGWLLayoutAttributeLeft,
    SGWLLayoutAttributeFull,
    SGWLLayoutAttributeRight,
    SGWLLayoutAttributeTop,
    SGWLLayoutAttributeBottom,
    SGWLLayoutAttributeLeftTop,
    SGWLLayoutAttributeRightTop,
    SGWLLayoutAttributeLeftBottom,
    SGWLLayoutAttributeRightBottom,
    SGWLLayoutAttributeSmaller,
    SGWLLayoutAttributeCenter,
    SGWLLayoutAttributeHalfCenter,
    SGWLLayoutAttributeTwoThirdsFourThirdsCenter,
};

@interface SGWLLayout : NSObject

+ (NSScreen *)swapScreenIfNeeded;
+ (void)layoutCurrentFocusedWindowWithLayoutAttribute:(SGWLLayoutAttribute)layoutAttribute;

@end
