///-----------------------------------------------------------------------------
/// @file I_SudokuPuzzle.h
///
/// Copyright (C) Circle Cardiovascular Imaging 2019/11/15
///
/// Author: Evan Loughlin
///-----------------------------------------------------------------------------


#ifndef ISUDOKUPUZZLE_H
#define ISUDOKUPUZZLE_H

#include "SudokuCell.h"
#include <QVector>

class I_SudokuPuzzle 
{
 public:
    virtual ~I_SudokuPuzzle(){}

 public:
    virtual const SudokuCell& cellAt(int row, int column) const = 0;
    virtual QVector<QVector<SudokuCell>> cellMatrix() = 0;
    virtual void setCell(int row, int column, SudokuCell value) = 0;
    virtual const QVector<SudokuCell>& rowAt(int rowIndex) const = 0;
    virtual QVector<SudokuCell> columnAt(int columnIndex) const = 0;
    virtual QVector<SudokuCell> quadrantAt(int quadrantIndex) const = 0;
};

#endif //ISUDOKUPUZZLE_H