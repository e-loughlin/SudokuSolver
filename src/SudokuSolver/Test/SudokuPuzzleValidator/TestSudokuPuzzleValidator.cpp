/*
   @file TestSudokuPuzzleValidator.cpp

   Copyright (C) Evan Loughlin 2019
*/

#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include <QScopedPointer>

#include "SudokuPuzzleValidator.h"
#include "SudokuPuzzle.h"

using ::testing::NiceMock;

namespace
{
    class TestSudokuPuzzleValidator : public ::testing::Test
    {
     protected:
        TestSudokuPuzzleValidator(){}
        ~TestSudokuPuzzleValidator() override {}

        void SetUp() override
        {
            mPatient.reset(new SudokuPuzzleValidator());
        }

        void TearDown() override
        {
            mPatient.reset();
        }

        QScopedPointer<SudokuPuzzleValidator> mPatient;
    };

    TEST_F(TestSudokuPuzzleValidator, CanBeInstantiated)
    {

    }

} //namespace