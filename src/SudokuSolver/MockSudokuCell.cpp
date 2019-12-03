
#include "MockSudokuCell.h"

void MockSudokuCell::makeValueReturn(int value)
{
    ON_CALL(*this, value()).WillByDefault(Return(value));
}

void MockSudokuCell::expectValueNotCalled()
{
    EXPECT_CALL(MockSudokuCell, value()).Times(0);
}

void MockSudokuCell::makeBitValueReturn(int value)
{
    ON_CALL(*this, bitValue()).WillByDefault(Return(value));
}

void MockSudokuCell::expectBitValueNotCalled()
{
    EXPECT_CALL(MockSudokuCell, bitValue()).Times(0);
}

