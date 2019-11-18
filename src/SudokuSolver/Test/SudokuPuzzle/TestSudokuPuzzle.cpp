
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

        // Helper functions
        SudokuCell randomSudokuCell();
        QVector<SudokuCell> randomSudokuCells();
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
        QVector<SudokuCell> randomCells = randomSudokuCells();
        mPatient.reset(new SudokuPuzzle(randomCells)); 

        for(int row = 0; row < 9; row++)
        {
            for(int column = 0; column < 9; column++)
            {
                ASSERT_EQ(mPatient->valueAt(row, column), randomCells.at(row*9 + column));
            }
        }
    }

    // Test Helpers
    SudokuCell TestSudokuPuzzle::randomSudokuCell()
    {
        return static_cast<SudokuCell>(rand() % SudokuCell::_9);
    }

    QVector<SudokuCell> TestSudokuPuzzle::randomSudokuCells()
    {
        QVector<SudokuCell> randomCells;
        for (int i = 0; i < 9*9; i++)
        {
            randomCells.append(randomSudokuCell());
        }
        return randomCells;
    }
    
} //namespace
