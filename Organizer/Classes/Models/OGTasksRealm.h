//
//  OGTasksRealm.h
//  Organizer
//
//  Created by Ahmed Dizdar on 06/05/16.
//  Copyright © 2016 ad. All rights reserved.
//

#import <Realm/Realm.h>

@interface OGTasksRealm : RLMObject

@property NSString *id;
@property NSString *title;
@property NSString *bodyText;
@property NSString *assignedTo;
@property NSInteger priority;
@property NSUInteger timeLeft;
@property NSUInteger status;

@end
