/*
 * TowerTest.cpp
 *
 *  Created on: 06/03/2018
 *      Author: usuario
 */

#include "../ClassGame/Tower.h"
#include <gtest/gtest.h>

class TowerTest : public ::testing::Test {
protected:

};

TEST_F(TowerTest, addingMovement) {
	Tower tower(true);
	bool isValid1 = tower.validMove(0, 0, 1, 0);
	ASSERT_TRUE(isValid1);
	bool isValid2 = tower.validMove(0, 0, 1, 1);
	ASSERT_FALSE(isValid2);
}


