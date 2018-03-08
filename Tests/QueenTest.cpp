/*
 * QueenTest.cpp
 *
 *  Created on: 06/03/2018
 *      Author: usuario
 */

#include "../Queen.h"
#include <gtest/gtest.h>

class QueenTest : public ::testing::Test{
protected:

};

TEST_F(QueenTest, addingMovement){
	Queen queen(true);
	bool isValid1 = queen.validMove(0,3,3,3);//Comprueba movimiento vertical
	ASSERT_TRUE(isValid1);
	bool isValid2 = queen.validMove(3,4,3,7);//Comprueba movimiento horizontal
	ASSERT_TRUE(isValid2);
	bool isValid3 = queen.validMove(5,1,7,3);//Comprueba movimiento diagonal
	ASSERT_TRUE(isValid3);
	bool isValid4 = queen.validMove(3,3,5,4);
	ASSERT_FALSE(isValid4);
	bool isValid5 = queen.validMove(6,1,4,7);
	ASSERT_FALSE(isValid5);
}
