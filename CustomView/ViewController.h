#import <UIKit/UIKit.h>
#import "RateView.h"

@interface ViewController : UIViewController <RateViewDelegate>

@property (weak, nonatomic) IBOutlet RateView *rateView;
@property (weak, nonatomic) IBOutlet UILabel *statusLabel;

@end
