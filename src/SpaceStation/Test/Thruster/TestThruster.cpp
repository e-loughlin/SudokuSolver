
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

    TEST_F(TestThruster, ActivateWillReturnRumbleOnLevel1)
    {
        std::string expectedNoise = "Ruuummmbbbllleee";
        int level = 1;

        EXPECT_EQ(mPatient->activate(level), expectedNoise);
    }

    TEST_F(TestThruster, ActivateWillReturnVrrrrrOnLevel2)
    {
        std::string expectedNoise = "Vrrrrrrrrrrrrrrrrrrrr";
        int level = 2;

        EXPECT_EQ(mPatient->activate(level), expectedNoise);
    }

    TEST_F(TestThruster, ActivateWillReturnWooshOnLevel3)
    {
        std::string expectedNoise = "WOOOOOOOOSSSSSHHHHHHHHH!!!!";
        int level = 3;

        EXPECT_EQ(mPatient->activate(level), expectedNoise);
    }

} //namespace
