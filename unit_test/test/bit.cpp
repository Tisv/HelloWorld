/*
 * bit.cpp
 *
 *  Created on: 2016年12月2日
 *      Author: jianhui
 */
#include "gtest/gtest.h"

#define BIT3 (1 << 3) 			//8
#define BIT4 (0b0000001ul<<4) 	//

TEST(bit, bit)
{
	unsigned char a, b;
	a=b=15;
	a &= ~BIT3;
	b = b - 8;
	EXPECT_EQ(a, b);
	a=b=15;
	a |= BIT4;
	b = b + 16;
	EXPECT_EQ(a, b);

}



