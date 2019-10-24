
#include "gtest/gtest.h"
#include <QScopedPointer>

#include "SpaceStation.h"
#include "MockThruster.h"
#include "MockSupplyHold.h"
#include "MockThruster.h"
#include "MockThruster.h"

namespace 
{
    class TestSpaceStation : public ::testing::Test 
    {
     protected:
        TestSpaceStation(){}
        ~TestSpaceStation() override {}

        void SetUp() override
        {
            mThruster.reset(new MockThruster());
            mSupplyHold.reset(new MockSupplyHold());
            mFuelTank.reset(new MockFuelTank());
            mSensor.reset(new MockSensor());

            mPatient.reset(new SpaceStation(mThruster, mSupplyHold, mFuelTank, mSensor));
        }           

        void TearDown() override
        {
            mPatient.reset();

            mSensor.reset();
            mFuelTank.reset();
            mSupplyHold.reset();
            mThruster.reset();
        }

        QScopedPointer<SpaceStation> mPatient;

        QScopedPointer<MockThruster> mThruster;
        QScopedPointer<MockSupplyHold> mSupplyHold;
        QScopedPointer<MockFuelTank> mFuelTank;
        QScopedPointer<MockSensor> mSensor;
    };

    TEST_F(TestSpaceStation, CanBeInstantiated)
    {
    }

} //namespace
