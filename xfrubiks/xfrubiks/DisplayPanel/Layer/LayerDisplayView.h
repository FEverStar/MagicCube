//
//  LayerDisplayView.h
//  xfrubiks
//
//  Created by everettjf on 16/6/25.
//  Copyright © 2016年 xfteam. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LayerDisplayView : UIView

- (void)setColorByString:(NSString*)zhcnString;
- (void)restorePosition;

@end