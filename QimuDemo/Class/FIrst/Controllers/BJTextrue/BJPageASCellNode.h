//
//  BJPageASCellNode.h
//  QimuDemo
//
//  Created by 张文军 on 2020/3/26.
//  Copyright © 2020 ll. All rights reserved.
//

#import <AsyncDisplayKit/AsyncDisplayKit.h>
#import "XBPagerNode.h"

NS_ASSUME_NONNULL_BEGIN

@interface BJPageASCellNode : ASCellNode

@property (nonatomic, strong) XBPagerNode *pagerNode;

@property (nonatomic, copy) void (^outTableCanScrollBlock) (void);

@end

NS_ASSUME_NONNULL_END
