//
// Created by Florian on 02/05/14.
//
// To change the template use AppCode | Preferences | File Templates.
//


#import <Foundation/Foundation.h>


@class DraggableView;
@class PaneBehavior;


typedef NS_ENUM(NSInteger, PaneState) {
    PaneStateOpen,
    PaneStateClosed,
};


@interface MainView : UIView

@property (nonatomic, readonly) PaneState paneState;

@end