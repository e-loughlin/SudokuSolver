/*
   @file SudokuPuzzleValidator.h

   Copyright (C) Evan Loughlin 2019
*/

#pragma once

#include "I_SudokuPuzzleValidator.h"

class SudokuPuzzle;

class SudokuPuzzleValidator : public I_SudokuPuzzleValidator
{
 public:
    explicit SudokuPuzzleValidator();
    virtual ~SudokuPuzzleValidator();

 public:
    bool isValid(SudokuPuzzle& puzzle) const override;
};