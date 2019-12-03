
#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include <QScopedPointer>

#include "SudokuCell.h"

using ::testing::NiceMock;

namespace
{
    class TestSudokuCell : public ::testing::Test
    {
     protected:
        TestSudokuCell(){}
        ~TestSudokuCell() override {}

        void SetUp() override
        {
            mPatient.reset(new SudokuCell());
        }

        void TearDown() override
        {
            mPatient.reset();
        }

        QScopedPointer<SudokuCell> mPatient;
    };

    TEST_F(TestSudokuCell, DefaultConstructorWillInstantiateBlankSudokuCell)
    {
        EXPECT_EQ(mPatient->value(), 0);
    }

} //namespace