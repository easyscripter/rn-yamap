#ifndef YamapCircleView_h
#define YamapCircleView_h
#import <React/RCTComponent.h>
@import YandexMapsMobile;

@interface YamapCircleView: UIView<YMKMapObjectTapListener>

@property (nonatomic, copy) RCTBubblingEventBlock onPress;

// props
-(void) setFillColor:(UIColor*) color;
-(void) setStrokeColor:(UIColor*) color;
-(void) setStrokeWidth:(NSNumber*) width;
-(void) setZIndex:(NSNumber*) _zIndex;
-(void) setCircleCenter:(YMKPoint*) center;
-(void) setRadius:(float) radius;

- (YMKCircle*) getCircle;
-(YMKPolygonMapObject*) getMapObject;
-(void) setMapObject: (YMKCircleMapObject*) mapObject;

@end

#endif /* YamapCircleView */
