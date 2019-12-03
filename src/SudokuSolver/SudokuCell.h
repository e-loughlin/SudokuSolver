///-----------------------------------------------------------------------------
/// @file SudokuCell.h
///
/// Copyright (C) Circle Cardiovascular Imaging 2019
///
/// Author: Evan Loughlin
///-----------------------------------------------------------------------------


#ifndef SUDOKUCELL_H
#define SUDOKUCELL_H

#include "I_SudokuCell.h"

#include <QObject>

class SudokuCell : public QObject, public I_SudokuCell
{
Q_OBJECT

 public:
    explicit SudokuCell();
    explicit SudokuCell(SudokuCellValue value);

    virtual ~SudokuCell();

 public:
    SudokuCellValue value() const override;
    void setValue(SudokuCellValue value) override;
    int bitValue() const override;

 private:
    SudokuCellValue mValue;
};


#endif //SUDOKUCELL_H