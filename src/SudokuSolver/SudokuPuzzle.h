/*
   @file SudokuPuzzle.h   
   
   Author: Evan Loughlin   

   Description: A 2x2 Matrix representation of a SudokuPuzzle
*/

#ifndef SUDOKUPUZZLE_H
#define SUDOKUPUZZLE_H

#include "SudokuCell.h"
#include <QObject>
#include <QVector>

class SudokuPuzzle
{
 public:
    explicit SudokuPuzzle();
    explicit SudokuPuzzle(QVector<SudokuCell> cells);

    virtual ~SudokuPuzzle();

 public:
   //  SudokuCell& valueAt(int row, int column) const;
   QVector<SudokuCell> allCells();
   //  void setCell(SudokuCell value, int row, int column);
   //  QVector<SudokuCell> rowAt(int rowIndex) const;
   //  QVector<SudokuCell> columnAt(int columnIndex) const; 
   //  QVector<SudokuCell> quadrantAt(int quadrantIndex) const;

private:
   void initializeAccessors();

 private:
   QVector<SudokuCell> mAllCells;
   QVector<QVector<SudokuCell>> mPuzzleRows;
   QVector<QVector<SudokuCell>> mPuzzleColumns;
   QVector<QVector<SudokuCell>> mPuzzleQuadrants;
   const int mNumRows = 9;
   const int mNumColumns = 9;
};

#endif //SUDOKUPUZZLE_H