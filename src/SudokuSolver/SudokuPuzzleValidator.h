/*
   @file SudokuPuzzleValidator.h

   Copyright (C) Evan Loughlin 2019
*/

#pragma once

#include "I_SudokuPuzzleValidator.h"

#include <QObject>

class SudokuPuzzle;

class SudokuPuzzleValidator : public QObject, public I_SudokuPuzzleValidator
{
Q_OBJECT

 public:
    explicit SudokuPuzzleValidator();
    virtual ~SudokuPuzzleValidator();

 public:
    bool isValid(SudokuPuzzle& puzzle) const override;
};