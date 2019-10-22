

#include "SpaceStation.h"
#include "Thruster.h"
#include "Sensor.h"
#include "SupplyHold.h"
#include "FuelTank.h"


// HEADER
class SpaceStation
{
    public:
        SpaceStation(I_Thruster& thruster, I_Sensor& sensor, I_SupplyHold& supplyHold, I_FuelTank& fuelTank);
        ~SpaceStation();

        void flyAroundOrWhatever();

    private:
        I_Thruster& mThruster;
        I_Sensor& mSensor;
        I_SupplyHold& mSupplyHold;
        I_FuelTank& mFuelTank;
}

// CONSTRUCTOR DEFINITION
SpaceStation::SpaceStation(Thruster& thruster, Sensor& sensor, SupplyHold& supplyHold, FuelTank& fuelTank) :
    mThruster(thruster),
    mSensor(sensor),
    mSupplyHold(supplyHold),
    mFuelTank(fuelTank)
{
}

// CONTAINER HEADER
class SpaceStationContainer
{
    public:
        SpaceStationContainer();
        ~SpaceStationContainer();

    private:
        SpaceStation& mSpaceStation;
        Thruster& mThruster;
        Sensor& mSensor;
        SupplyHold& mSupplyHold;
        FuelTank& mFuelTank;
}

// CONTAINER CONSTRUCTOR
SpaceStationContainer::SpaceStationContainer() :
    mThruster(new Thruster()),
    mSensor(new Sensor()),
    mSupplyHold(new SupplyHold()),
    mFuelTank(new FuelTank()),
    mSpaceStation(new SpaceStation(mThruster, mSensor, mSupplyHold, mFuelTank))
{

}


class Square : public I_Shape
{
   public:
    Square(int width);
    ~Square();

    int area() override {return mWidth*mWidth};

   private: 
    int mWidth;
}

class Circle : public I_Shape
{
   public:
    explicit Circle(int radius);
    virtual ~Circle();

    int area() override {return pi()*mRadius*mRadius};

   private:
    int mRadius;
}

class I_Shape
{
   public:
    virtual ~Shape();

    virtual int area() = 0;
}


class AreaCalculator
{
   public:
    AreaCalculator();
    ~AreaCalculator();

    int calculateArea(Shape shape);
}

int AreaCalculator::calculateArea(Shape shape)
{
    if(shape is a Square)
    {
        // return width*width;
    }
    else if (shape is a Circle)
    {
        // return pi() * radius * radius;
    }
}