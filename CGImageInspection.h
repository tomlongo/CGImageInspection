
@interface CGImageInspection : NSObject

+ (CGImageInspection *) imageInspectionWithCGImage: (CGImageRef) imageRef ;

- (void) colorAt: (CGPoint) location
             red: (CGFloat *) red
           green: (CGFloat *) green
            blue: (CGFloat *) blue
           alpha: (CGFloat *) alpha ;

@end
