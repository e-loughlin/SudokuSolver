
#include "MockSudokuCell.h"

using ::testing::Return;

void MockSudokuCell::makeValueReturn(int value)
{
    ON_CALL(*this, value()).WillByDefault(Return(value));
}

void MockSudokuCell::expectValueNotCalled()
{
    EXPECT_CALL(*this, value()).Times(0);
}

void MockSudokuCell::makeBitValueReturn(int value)
{
    ON_CALL(*this, bitValue()).WillByDefault(Return(value));
}

void MockSudokuCell::expectBitValueNotCalled()
{
    EXPECT_CALL(*this, bitValue()).Times(0);
}

