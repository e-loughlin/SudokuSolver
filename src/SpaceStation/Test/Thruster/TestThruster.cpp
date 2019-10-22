
#include "gtest/gtest.h"
#include <QScopedPointer>
#include "Thruster.h"

namespace 
{
    class TestThruster : public ::testing::Test 
    {
     protected:
        TestThruster(){}
        ~TestThruster() override {}

        void SetUp() override
        {
            mPatient.reset(new Thruster());
        }           

        void TearDown() override
        {
            mPatient.reset();
        }

        QScopedPointer<Thruster> mPatient;

    };

    TEST_F(TestThruster, CanBeInstantiated)
    {

    }

} //namespace
