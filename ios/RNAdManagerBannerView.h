#import <React/RCTView.h>
#import <React/RCTComponent.h>


@interface RNAdManagerBannerView : RCTView

@property (nonatomic, copy) NSArray *validAdSizes;
@property (nonatomic, copy) NSArray *testDevices;
@property (nonatomic, copy) NSDictionary *targeting;
@property (nonatomic, copy) NSString *adSize;
@property (nonatomic) int number;
@property (nonatomic, strong) NSString *adUnitID;
@property (nonatomic, strong) NSString *apsSlotId;
@property (nonatomic, copy) NSString *correlator;
@property (nonatomic) NSString *adsRefresh;


@property (nonatomic, copy) RCTBubblingEventBlock onSizeChange;
@property (nonatomic, copy) RCTBubblingEventBlock onAppEvent;
@property (nonatomic, copy) RCTBubblingEventBlock onAdLoaded;
@property (nonatomic, copy) RCTBubblingEventBlock onAdFailedToLoad;
@property (nonatomic, copy) RCTBubblingEventBlock onAdOpened;
@property (nonatomic, copy) RCTBubblingEventBlock onAdRecordImpression;
@property (nonatomic, copy) RCTBubblingEventBlock onAdRecordClick;

@property (nonatomic, copy) RCTBubblingEventBlock onAdClosed;


- (void)loadBanner;

@end
