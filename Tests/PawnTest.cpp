/*
 * PawnTest.cpp
 *
 *  Created on: 07/03/2018
 *      Author: usuario
 */
#include "../Pawn.h"
#include <gtest/gtest.h>

class PawnTest : public ::testing::Test{
protected:

};

TEST_F(PawnTest, validMoves) {
	Pawn pawn1 (true);
	bool isValid1 = pawn1.validMove(1,0,2,0);
	ASSERT_TRUE(isValid1);
	bool isValid2 = pawn1.validMove(1,0,2,1);
	ASSERT_FALSE(isValid2);

}
