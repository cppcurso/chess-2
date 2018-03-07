/*
 * BishopTest.cpp
 *
 *  Created on: 06/03/2018
 *      Author: usuario
 */

#include "../Bishop.h"
#include <gtest/gtest.h>

class BishopTest : public ::testing::Test{
protected:

};

TEST_F(BishopTest, validMoves) {
	Bishop bishop1 (true);
	bool isValid1 = bishop1.validMove(0,2,1,1);
	ASSERT_TRUE(isValid1);
	bool isValid2 = bishop1.validMove(0,2,1,2);
	ASSERT_FALSE(isValid2);
	bool isValid1 = bishop1.validMove(0,2,1,3);
	ASSERT_TRUE(isValid1);

}
