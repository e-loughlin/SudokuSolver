#include "SudokuCell.h"



SudokuCell::SudokuCell(SudokuCellValue value) :
mValue(value)
{
}

SudokuCell::~SudokuCell()
{
}

SudokuCellValue SudokuCell::value() const
{
    return mValue;
}

void SudokuCell::setValue(SudokuCellValue value)
{
    mValue = value;
}

// Representation as bitshifted binary allows for efficient AND / OR operations
int SudokuCell::bitValue() const
{
    switch(mValue)
    {
        case SudokuCellValue::BLANK:
            return 0b000000000;
        case SudokuCellValue::_1:
            return 0b000000001;
        case SudokuCellValue::_2:
            return 0b000000010;
        case SudokuCellValue::_3:
            return 0b000000100;
        case SudokuCellValue::_4:
            return 0b000001000;
        case SudokuCellValue::_5:
            return 0b000010000;
        case SudokuCellValue::_6:
            return 0b000100000;
        case SudokuCellValue::_7:
            return 0b001000000;
        case SudokuCellValue::_8:
            return 0b010000000;
        case SudokuCellValue::_9:
            return 0b100000000;
    }
}
