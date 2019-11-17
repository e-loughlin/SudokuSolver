///-----------------------------------------------------------------------------
/// @file SudokuPuzzle.cpp
///
/// Author: Evan Loughlin
///-----------------------------------------------------------------------------

#include "SudokuPuzzle.h"

SudokuPuzzle::SudokuPuzzle()
{
    for(int row = 0; row < mNumRows; row++)
    {
        QVector<SudokuCell> entireRow;
        for(int column = 0; column < mNumColumns; column++)
        {
            entireRow.append(SudokuCell::BLANK);
        }

        mCellMatrix.append(entireRow);
    }
}

SudokuPuzzle::SudokuPuzzle(QVector<SudokuCell> cells)
{
    for(int row = 0; row < mNumRows; row++)
    {
        QVector<SudokuCell> entireRow;
        for(int column = 0; column < mNumColumns; column++)
        {
            entireRow.append(mCellMatrix.at(row + column));
        }

        mCellMatrix.append(entireRow);
    }
}

SudokuPuzzle::~SudokuPuzzle()
{
}

QVector<QVector<SudokuCell>> SudokuPuzzle::cellMatrix()
{
    return mCellMatrix;
}

const SudokuCell& SudokuPuzzle::valueAt(int row, int column) const
{
    return mCellMatrix.at(row).at(column);
}

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

void SudokuPuzzle::initializeAccessors()
{

}