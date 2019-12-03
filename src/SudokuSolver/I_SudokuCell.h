///-----------------------------------------------------------------------------
/// @file I_SudokuCell.h
///
/// Copyright (C) Circle Cardiovascular Imaging 2019
///
/// Author: Evan Loughlin
///-----------------------------------------------------------------------------


#ifndef ISUDOKUCELL_H
#define ISUDOKUCELL_H

#include "SudokuCellValue.h"

class I_SudokuCell 
{
 public: 
    virtual ~I_SudokuCell(){}

 public:
    virtual SudokuCellValue value() const = 0;
    virtual void setValue(SudokuCellValue value) = 0;
    virtual int bitValue() const = 0;
};

#endif //ISUDOKUCELL_H