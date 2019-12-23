/*
   @file I_SudokuPuzzleValidator.h

   Copyright (C) Evan Loughlin 2019
*/

#pragma once

class SudokuPuzzle;

class I_SudokuPuzzleValidator 
{
 public:
    virtual ~I_SudokuPuzzleValidator(){}

 public:
    virtual bool isValid(SudokuPuzzle& puzzle) const = 0;
};