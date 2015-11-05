/*=========================================================================
 Program:   OsiriX
 
 Copyright (c) OsiriX Team
 All rights reserved.
 Distributed under GNU - LGPL
 
 See http://www.osirix-viewer.com/copyright.html for details.
 
 This software is distributed WITHOUT ANY WARRANTY; without even
 the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
 PURPOSE.
 =========================================================================*/

#import "DicomDatabase.h"

@interface DicomDatabase()
{ // warning: the compiler only supports category class variables in 64-bit mode, so 32-bits plugins won't be able to use this header!
    dispatch_queue_t scheduledRoutingQueue;
}
@end

@interface DicomDatabase (Routing)

-(void)initRouting;
-(void)deallocRouting;

-(void)addImages:(NSArray*)_dicomImages toSendQueueForRoutingRule:(NSDictionary*)routingRule;
-(void)applyRoutingRules:(NSArray*)routingRules toImages:(NSArray*)images;
-(void)initiateRoutingUnlessAlreadyRouting;
-(void)routing;

@end
