///-----------------------------------------------------------------------------
/// @file MockSudokuCell.h
///
/// Copyright (C) Circle Cardiovascular Imaging 2019
///
/// Author: Evan Loughlin
///-----------------------------------------------------------------------------


#include <gmock/gmock.h>
#include "I_SudokuCell.h"

class MockSudokuCell : public I_SudokuCell
{
 public:
    MOCK_METHOD0(value, int());
    MOCK_METHOD0(bitValue, int());

    void makeValueReturn(int value);
    void expectValueNotCalled();

    void makeBitValueReturn(int value);
    void expectBitValueNotCalled();

};