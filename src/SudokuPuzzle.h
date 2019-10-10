///-----------------------------------------------------------------------------
/// @file SudokuPuzzle.h
///
/// Copyright (C) Circle Cardiovascular Imaging Inc. 2019
///
/// Author: 
///
/// Description:
///-----------------------------------------------------------------------------


#ifndef SUDOKUPUZZLE_H
#define SUDOKUPUZZLE_H

#include "ISudokuPuzzle.h"

#include <QObject>


class SudokuPuzzle : public QObject, public ISudokuPuzzle
{
Q_OBJECT

 public:
    explicit SudokuPuzzle();
    virtual ~SudokuPuzzle();

 public:

 private:

};

#endif //SUDOKUPUZZLE_H