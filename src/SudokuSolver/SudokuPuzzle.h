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
    virtual ~SudokuPuzzle();

 public:
   //  SudokuCell& valueAt(int row, int column) const;
   //  void setCell(SudokuCell value, int row, int column);
   //  QVector<SudokuCell> rowAt(int rowIndex) const;
   //  QVector<SudokuCell> columnAt(int columnIndex) const; 
   //  QVector<SudokuCell> quadrantAt(int quadrantIndex) const;

 private:
   QVector<QVector<SudokuCell>> mPuzzleRows;
   QVector<QVector<SudokuCell>> mPuzzleColumns;
   QVector<QVector<SudokuCell>> mPuzzleQuadrants;
};

#endif //SUDOKUPUZZLE_H