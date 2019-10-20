
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
        QVector<SudokuCell> allCells = mPatient->allCells();
        for (SudokuCell cell : allCells)
        {
            ASSERT_EQ(cell, SudokuCell::BLANK);
        }
    }

    TEST_F(TestSudokuPuzzle, CanBeConstructedWithQVector)
    {
        QVector<SudokuCell> randomCells = randomSudokuCells();
        mPatient.reset(new SudokuPuzzle(randomCells));
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
