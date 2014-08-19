//
//  ViewController.h
//  TelnetChatTest
//
//  Created by Ervin Ebalo on 8/18/14.
//  Copyright (c) 2014 Primo. All rights reserved.
//

#import <UIKit/UIKit.h>


NSInputStream *inputStream;
NSOutputStream *outputStream;
NSMutableArray *messages;

@interface ViewController : UIViewController <NSStreamDelegate>

- (IBAction)connectToServer:(id)sender;
- (IBAction)joinServer:(id)sender;

- (IBAction)sendMessage1:(id)sender;
- (IBAction)sendMessage2:(id)sender;
- (IBAction)sendMessage3:(id)sender;
- (IBAction)sendMessage4:(id)sender;


- (void) initNetworkCommunication;
- (void) messageReceived:(NSString *)message;


@end



