
#include "gtest/gtest.h"
#include <QScopedPointer>
#include "SudokuPuzzle.h"

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
    };

    TEST_F(TestSudokuPuzzle, CanBeInstantiated)
    {
        ASSERT_FALSE(true);
    }
    
} //namespace
