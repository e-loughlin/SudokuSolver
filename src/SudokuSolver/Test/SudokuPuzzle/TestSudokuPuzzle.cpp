
#include "gtest/gtest.h"
#include <QScopedPointer>
#include "SudokuPuzzle.h"
#include "SudokuCell.h"

namespace 
{
    class TestSudokuPuzzle : public ::testing::Test 
    {
     protected:
        TestSudokuPuzzle(){}
        ~TestSudokuPuzzle() override {}

        void SetUp() override
        {
            mPatient.reset(new SudokuPuzzle());
        }           

        void TearDown() override
        {
            mPatient.reset();
        }

        QScopedPointer<SudokuPuzzle> mPatient;

        // Helper Functions
        SudokuCell randomSudokuCell();
        QVector<SudokuCell> randomSudokuCellList(int size);
        QVector<QVector<SudokuCell>> randomSudokuCellMatrix();
    };

    TEST_F(TestSudokuPuzzle, DefaultConstructorWillInitializeBlankPuzzle)
    {
        for (int row = 0; row < 9; row++)
        {
            for(int column = 0; column < 9; column ++)
            {
                ASSERT_EQ(mPatient->valueAt(row, column), SudokuCell::BLANK);
            }
        }
    }

    TEST_F(TestSudokuPuzzle, ValueAtReturnsCorrectValueWhenConstructedWithList)
    {
        QVector<SudokuCell> randomCells = randomSudokuCellList(9*9);
        mPatient.reset(new SudokuPuzzle(randomCells)); 

        for(int row = 0; row < 9; row++)
        {
            for(int column = 0; column < 9; column++)
            {
                ASSERT_EQ(mPatient->valueAt(row, column), randomCells.at(row*9 + column));
            }
        }
    }

    TEST_F(TestSudokuPuzzle, ConstructingWithListPerformsDeepCopy)
    {
        QVector<SudokuCell> randomCells = randomSudokuCellList(9*9);
        mPatient.reset(new SudokuPuzzle(randomCells));
        
        randomCells.resize(0);

        ASSERT_GE(mPatient->valueAt(4,4), 0);
    }

    TEST_F(TestSudokuPuzzle, ValueAtReturnsCorrectValueWhenConstructedWithMatrix)
    {
        QVector<QVector<SudokuCell>> randomMatrix = randomSudokuCellMatrix();
        mPatient.reset(new SudokuPuzzle(randomMatrix));

        for(int row = 0; row < 9; row++)
        {
            for(int column = 0; column < 9; column++)
            {
                ASSERT_EQ(mPatient->valueAt(row, column), randomMatrix.at(row).at(column));
            }
        }
    }

    TEST_F(TestSudokuPuzzle, ConstructingWithMatrixPerformsDeepCopy)
    {
        QVector<QVector<SudokuCell>> randomMatrix = randomSudokuCellMatrix();
        mPatient.reset(new SudokuPuzzle(randomMatrix));
        
        randomMatrix.resize(0);

        ASSERT_GE(mPatient->valueAt(4,4), 0);
    }

    TEST_F(TestSudokuPuzzle, RowAccessorRetrievesCorrectValues)
    {
        QVector<QVector<SudokuCell>> randomMatrix = randomSudokuCellMatrix();
        mPatient.reset(new SudokuPuzzle(randomMatrix));

        for(int row = 0; row < 9; row++)
        {
            for(int column = 0; column < 9; column++)
            {
                ASSERT_EQ(mPatient->rowAt(row).at(column), randomMatrix.at(row).at(column)); 
            }
        }
    }

    TEST_F(TestSudokuPuzzle, ColumnAccessorRetrievesCorrectValues)
    {
        QVector<QVector<SudokuCell>> randomMatrix = randomSudokuCellMatrix();
        mPatient.reset(new SudokuPuzzle(randomMatrix));

        for(int row = 0; row < 9; row++)
        {
            for(int column = 0; column < 9; column++)
            {
                ASSERT_EQ(mPatient->columnAt(column).at(row), randomMatrix.at(row).at(column)); 
            }
        }
    }

    TEST_F(TestSudokuPuzzle, QuadrantAccessorRetrievesCorrectValues)
    {
        
    }

    // Test Helpers
    SudokuCell TestSudokuPuzzle::randomSudokuCell()
    {
        return static_cast<SudokuCell>(rand() % SudokuCell::_9);
    }

    QVector<SudokuCell> TestSudokuPuzzle::randomSudokuCellList(int size)
    {
        QVector<SudokuCell> randomCells;
        for (int i = 0; i < size; i++)
        {
            randomCells.append(randomSudokuCell());
        }
        return randomCells;
    }

    QVector<QVector<SudokuCell>> TestSudokuPuzzle::randomSudokuCellMatrix()
    {
        QVector<QVector<SudokuCell>> randomMatrix;
        for (int row = 0; row < 9; row++)
        {
            randomMatrix.append(randomSudokuCellList(9));
        }
        return randomMatrix;
    }
    
} //namespace
