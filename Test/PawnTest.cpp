/*
 * PawnTest.cpp
 *
 *  Created on: 06/03/2018
 *      Author: usuario
 */

#include "../Pawn.h"
#include <gtest/gtest.h>

class PawnTest : public ::testing::Test {
protected:



};

TEST_F(PawnTest, validMoves){

	Pawn pw1 (true);
	bool isValid1 = pw1.validMove(1,1,2,2);
	ASSERT_TRUE(isValid1);
	bool isValid2 = pw1.validMove(1,1,2,2);
	ASSERT_FALSE(isValid2);
}
