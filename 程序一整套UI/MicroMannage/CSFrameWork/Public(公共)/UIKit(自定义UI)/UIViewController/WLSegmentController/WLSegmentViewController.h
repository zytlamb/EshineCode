//
//  WLSegmentViewController.h
//  MicroMannage
//
//  Created by 倪望龙 on 2017/3/13.
//  Copyright © 2017年 xunyijia. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WLSegmentViewController : UIViewController
@property(nonatomic,strong)NSArray *controllers;//子控制器
@property(nonatomic,strong)NSArray *titles;//标题
- (instancetype)initWithController:(NSArray *)controllers addTitles:(NSArray *)titles;

-(void)changeCurrentVCToIndex:(NSUInteger)index;
-(void)changeCurrentVCToNext;
-(void)changeCurrentVCToFront;
-(void)currentVCWillChangeTo:(NSUInteger)idex controller:(UIViewController*)vc;
-(void)currentVCDidChangeTo:(NSUInteger)idex controller:(UIViewController*)vc;
@end
