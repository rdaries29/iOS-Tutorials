//
//  ViewController.h
//  Tap Me
//
//  Created by Russel Daries on 2016/02/27.
//  Copyright © 2016 Russel Daries. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController{
    IBOutlet UILabel *scoreLabel;
    IBOutlet UILabel *timerLabel;
    
    //Attributes for timer
    NSInteger count;
    NSInteger seconds;
    NSTimer *timer;
}

@property (weak, nonatomic) IBOutlet UIButton *buttonPressed;

@end

