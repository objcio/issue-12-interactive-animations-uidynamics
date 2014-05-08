//
// Created by Florian on 21/04/14.
//
// To change the template use AppCode | Preferences | File Templates.
//


#import "ViewController.h"
#import "MainView.h"


@implementation ViewController

- (void)loadView
{
    [super loadView];

    MainView *mainView = [[MainView alloc] initWithFrame:self.view.bounds];
    [self.view addSubview:mainView];
}

@end