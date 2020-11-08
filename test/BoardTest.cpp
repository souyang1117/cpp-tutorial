#include "gtest/gtest.h"

#include "Board.h"

struct BoardBase : public ::testing::Test
{
	void SetUp()
	{
		
	}
	void TearDown()
	{
	}

	Board board_;
};

TEST_F(BoardBase, ShouldInit)
{
	board_.init();

	EXPECT_EQ(board_.getMark(), 'X');
	char * actualBoard = board_.getBoard();
	int digit = 1;
	for (int i = 0; i < 9; i++)
		EXPECT_EQ(actualBoard[i], DIGITS[digit++]);
}

TEST_F(BoardBase, ShouldDraw)
{
}

TEST_F(BoardBase, ShouldUpdate)
{
}

TEST_F(BoardBase, ShouldCheck)
{
}
