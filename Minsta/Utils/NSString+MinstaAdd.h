//
//  NSString+MinstaAdd.h
//  Minsta
//
//  Created by maocl023 on 16/5/12.
//  Copyright © 2016年 jjj2mdd. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (MinstaAdd)

/**
   Returns the size of the string if it were rendered with the specified constraints.

   @param font          The font to use for computing the string size.

   @param size          The maximum acceptable size for the string. This value is
   used to calculate where line breaks and wrapping would occur.

   @param lineBreakMode The line break options for computing the size of the string.
   For a list of possible values, see NSLineBreakMode.

   @return              The width and height of the resulting string's bounding box.
   These values may be rounded up to the nearest whole number.
 */
- (CGSize)sizeForFont:(UIFont *)font size:(CGSize)size mode:(NSLineBreakMode)lineBreakMode;

/**
   Returns the width of the string if it were to be rendered with the specified
   font on a single line.

   @param font  The font to use for computing the string width.

   @return      The width of the resulting string's bounding box. These values may be
   rounded up to the nearest whole number.
 */
- (CGFloat)widthForFont:(UIFont *)font;

/**
   Returns the height of the string if it were rendered with the specified constraints.

   @param font   The font to use for computing the string size.

   @param width  The maximum acceptable width for the string. This value is used
   to calculate where line breaks and wrapping would occur.

   @return       The height of the resulting string's bounding box. These values
   may be rounded up to the nearest whole number.
 */
- (CGFloat)heightForFont:(UIFont *)font width:(CGFloat)width;

/**
 *  Returns a user friendly elapsed time such as '50s', '6m' or '3w'
 *
 *  @param dateString Source date string
 *
 *  @return Formatted date string
 */
+ (nullable NSString *)elapsedTimeStringSinceDate:(NSString *)dateString;

@end

NS_ASSUME_NONNULL_END