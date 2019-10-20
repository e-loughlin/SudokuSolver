/*
   @file SudokuCell.h   
   
   Author: Evan Loughlin   

   Description: Enumeration of possible values within a Sudoku Cell. Each cell 
   can contain one of 9 values, or blank. Implemented as bit flags in order to 
   utilize bitwise operations.
*/

#ifndef SUDOKUCELL_H
#define SUDOKUCELL_H

enum SudokuCell 
{
    BLANK = 0,
    _1 = 1 << 0, // Binary: 000000001
    _2 = 1 << 1, // Binary: 000000010
    _3 = 1 << 2, // Binary: 000000100
    _4 = 1 << 3, // Binary: 000001000
    _5 = 1 << 4, // Binary: 000010000
    _6 = 1 << 5, // Binary: 000100000
    _7 = 1 << 6, // Binary: 001000000
    _8 = 1 << 7, // Binary: 010000000
    _9 = 1 << 8, // Binary: 100000000
};

#endif // SUDOKUCELL_H