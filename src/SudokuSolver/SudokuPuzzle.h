/*
   @file SudokuPuzzle.h   
   
   Author: Evan Loughlin   

   Description: A 2x2 Matrix representation of a SudokuPuzzle
*/

#ifndef SUDOKUPUZZLE_H
#define SUDOKUPUZZLE_H

#include "I_SudokuPuzzle.h"
#include "SudokuCell.h"
#include <QObject>
#include <QVector>

class SudokuPuzzle : public I_SudokuPuzzle
{
 public:
    explicit SudokuPuzzle();
    explicit SudokuPuzzle(QVector<SudokuCell> cells);
    explicit SudokuPuzzle(QVector<QVector<SudokuCell>> cellMatrix);

    virtual ~SudokuPuzzle();

 public:
    const SudokuCell& valueAt(int row, int column) const;
    QVector<QVector<SudokuCell>> cellMatrix();
    void setCell(int rowIndex, int columnIndex, SudokuCell value);
    const QVector<SudokuCell>& rowAt(int rowIndex) const;
    QVector<SudokuCell> columnAt(int columnIndex) const; 
    QVector<SudokuCell> quadrantAt(int quadrantIndex) const;

 private:
    void initializeBlankPuzzle();

 private:
   QVector<QVector<SudokuCell>> mCellMatrix;
   const int mNumRows = 9;
   const int mNumColumns = 9;
};

#endif //SUDOKUPUZZLE_H