//
//  PCCommonUI.h
//
//
//  
//   
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#pragma mark - Colors

#define PCColorPink      UIColorMake(255, 192, 203)
#define PCColorHotPink   UIColorMake(255, 105, 180)
#define PCColorLightPink UIColorMake(255, 182, 193)
#define PCColorGold      UIColorMake(255, 215, 0);


#define UIColorGray1 UIColorMake(53, 60, 70)
#define UIColorGray2 UIColorMake(73, 80, 90)
#define UIColorGray3 UIColorMake(93, 100, 110)
#define UIColorGray4 UIColorMake(113, 120, 130)
#define UIColorGray5 UIColorMake(133, 140, 150)
#define UIColorGray6 UIColorMake(153, 160, 170)
#define UIColorGray7 UIColorMake(173, 180, 190)
#define UIColorGray8 UIColorMake(196, 200, 208)
#define UIColorGray9 UIColorMake(216, 220, 228)

#define UIColorDarkGray1 UIColorMake(218, 220, 224)
#define UIColorDarkGray2 UIColorMake(198, 200, 204)
#define UIColorDarkGray3 UIColorMake(178, 180, 184)
#define UIColorDarkGray4 UIColorMake(158, 160, 164)
#define UIColorDarkGray5 UIColorMake(138, 140, 144)
#define UIColorDarkGray6 UIColorMake(118, 120, 124)
#define UIColorDarkGray7 UIColorMake(98, 100, 104)
#define UIColorDarkGray8 UIColorMake(78, 80, 84)
#define UIColorDarkGray9 UIColorMake(58, 60, 64)

#define UIColorTheme1 UIColorMake(239, 83, 98) // Grapefruit
#define UIColorTheme2 UIColorMake(254, 109, 75) // Bittersweet
#define UIColorTheme3 UIColorMake(255, 207, 71) // Sunflower
#define UIColorTheme4 UIColorMake(159, 214, 97) // Grass
#define UIColorTheme5 UIColorMake(63, 208, 173) // Mint
#define UIColorTheme6 UIColorMake(49, 189, 243) // Aqua
#define UIColorTheme7 UIColorMake(90, 154, 239) // Blue Jeans
#define UIColorTheme8 UIColorMake(172, 143, 239) // Lavender
#define UIColorTheme9 UIColorMake(238, 133, 193) // Pink Rose
#define UIColorTheme10 UIColorMake(39, 192, 243) // Dark

extern NSString *const PCSelectedThemeIdentifier;
extern NSString *const PCThemeIdentifierDefault;
extern NSString *const PCThemeIdentifierGrapefruit;
extern NSString *const PCThemeIdentifierGrass;
extern NSString *const PCThemeIdentifierPinkRose;
extern NSString *const PCThemeIdentifierDark;

#define CodeFontMake(_pointSize) [UIFont fontWithName:@"Menlo" size:_pointSize]
#define CodeAttributes(_fontSize) @{NSFontAttributeName: CodeFontMake(_fontSize), NSForegroundColorAttributeName: PCThemeManager.currentTheme.themeCodeColor}

#define IsUITest NSProcessInfo.processInfo.environment[@"isUITest"].boolValue

/// QMUIButton 系列 Demo 里的一行高度
extern const CGFloat PCButtonSpacingHeight;

@interface PCCommonUI : NSObject

+ (void)renderGlobalAppearances;
@end

@interface PCCommonUI (PCThemeColor)

+ (UIColor *)randomThemeColor;
@end

@interface PCCommonUI (PCLayer)

+ (CALayer *)generateSeparatorLayer;
@end
