//
//  ViewController.h
//  PersonalInfo
//
//  Created by Nzenga Edjidjimo on 2017-01-23.
//  Copyright © 2017 MtlZenTest. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *FN;
@property (weak, nonatomic) IBOutlet UITextField *LN;
@property (weak, nonatomic) IBOutlet UITextField *PH;
@property (weak, nonatomic) IBOutlet UITextField *NUM;
@property (weak, nonatomic) IBOutlet UITextField *ST;
@property (weak, nonatomic) IBOutlet UITextField *CT;
@property (weak, nonatomic) IBOutlet UITextField *Co;
@property (weak, nonatomic) IBOutlet UITextField *PC;

@property (weak, nonatomic) IBOutlet UIButton *CButton;
@property (weak, nonatomic) IBOutlet UIButton *Mbutton;
@property (weak, nonatomic) IBOutlet UIButton *Sbutton;

@property (weak, nonatomic) IBOutlet UILabel *FNlabel;
@property (weak, nonatomic) IBOutlet UILabel *LNlabel;
@property (weak, nonatomic) IBOutlet UILabel *PHlabel;
@property (weak, nonatomic) IBOutlet UILabel *NUMlabel;
@property (weak, nonatomic) IBOutlet UILabel *STlabel;
@property (weak, nonatomic) IBOutlet UILabel *CTlabel;
@property (weak, nonatomic) IBOutlet UILabel *COUlabel;
@property (weak, nonatomic) IBOutlet UILabel *PClabel;



@end

