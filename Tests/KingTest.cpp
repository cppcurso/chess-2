/*
 * KingTest.cpp
 *
 *  Created on: 07/03/2018
 *      Author: usuario
 */

#include "../King.h"
#include <gtest/gtest.h>

class KingTest : public ::testing::Test {
protected:
};

TEST_F(KingTest, addingMovement) {
	King king(true);
	bool isValid1 = king.validMove(1, 1, 0, 0);
	ASSERT_TRUE(isValid1);
	bool isValid2 = king.validMove(1, 1, 0, 1);
	ASSERT_TRUE(isValid2);
	bool isValid3 = king.validMove(1, 1, 1, 2);
	ASSERT_TRUE(isValid3);
	bool isValid4 = king.validMove(1, 1, 3, 1);
	ASSERT_FALSE(isValid4);
	bool isValid5 = king.validMove(1, 1, 3, 3);
	ASSERT_FALSE(isValid5);
}
