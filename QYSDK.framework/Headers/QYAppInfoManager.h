//
//  QYAppInfoManager.h
//  QYSDK
//
//  Created by 徐晖 on 2022/6/10.
//  Copyright © 2022 Netease. All rights reserved.
//

#import <Foundation/Foundation.h>


typedef void(^QYCompletionBlock)(BOOL success);

@interface YSFAppInfoManager : NSObject

- (BOOL)hasCreateAccount;
- (void)tryCreateAccount;
- (void)logout:(QYCompletionBlock)completion;

@end
