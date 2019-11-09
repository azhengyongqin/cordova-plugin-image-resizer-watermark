#import <Cordova/CDVPlugin.h>
#import <Photos/Photos.h>
@interface ImageResizer : CDVPlugin{
    NSString* longitude; //经度
    NSString* latitude; //纬度
    NSString* locationDescribe; //具体位置描述
}

- (void) resize:(CDVInvokedUrlCommand*)command;
- (UIImage*) rotateImage:(UIImage*) image withRotation:(int) rotation;

//添加文字水印
- (UIImage *)addTextWatermark:(UIImage *)img;
@end
