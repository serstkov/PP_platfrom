//
//  Module.h
//  poconept_v.1
//
//  Created by Justas Serstkovas on 25/03/2013.
//  Copyright (c) 2013 Justas Serstkovas. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Module : NSManagedObject

@property (nonatomic, retain) NSNumber * id;
@property (nonatomic, retain) NSString * title;
@property (nonatomic, retain) NSString * videoURL;
@property (nonatomic, retain) NSString * reading;
@property (nonatomic, retain) NSData * audio;

@end
