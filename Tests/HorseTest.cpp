/*
 * HorseTest.cpp
 *
 *  Created on: 07/03/2018
 *      Author: usuario
 */

#include "../Horse.h"
#include <gtest/gtest.h>

class HorseTest : public ::testing::Test {
protected:
};

TEST_F(HorseTest, addingMovement) {
	Horse horse(true);
	bool isValid1 = horse.validMove(0, 1, 2, 2);
	ASSERT_TRUE(isValid1);
	bool isValid2 = horse.validMove(0, 1, 1, 3);
	ASSERT_TRUE(isValid2);
	bool isValid3 = horse.validMove(0, 1, 2, 3);
	ASSERT_FALSE(isValid3);
}



