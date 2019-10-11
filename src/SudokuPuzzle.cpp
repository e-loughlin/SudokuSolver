///-----------------------------------------------------------------------------
/// @file SudokuPuzzle.cpp
///
/// Author: Evan Loughlin
///-----------------------------------------------------------------------------

#include "SudokuPuzzle.h"


SudokuPuzzle::SudokuPuzzle()
{
}

SudokuPuzzle::~SudokuPuzzle()
{
}

// SudokuCell& SudokuPuzzle::valueAt(int row, int column) const
// {
//     return mPuzzle.at(row).at(column);
// }

// void setCell(SudokuCell value, int rowIndex, int columnIndex)
// {
//     mPuzzle[rowIndex][columnIndex] = value;
// }

// QVector<SudokuCell>& rowAt(int rowIndex) const
// {
//     return mPuzzle.at(rowIndex);
// }

// QVector<SudokuCell>& columnAt(int columnIndex) const
// {
    
// }

// // Quadrants within SudokuPuzzle are the 9-cell regions distributed as follows:
// // -------------
// // | 1 | 2 | 3 |  
// // -------------
// // | 4 | 5 | 6 |  
// // -------------
// // | 7 | 8 | 9 |
// // -------------
// // This function returns a QVector containing the 9 SudokuCells 
// QVector<SudokuCell>& quadrantAt(int quadrantIndex) const
// {

// }