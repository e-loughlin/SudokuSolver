///-----------------------------------------------------------------------------
/// @file Thruster.h
///
/// Copyright (C) Circle Cardiovascular Imaging Inc. 2019
///
/// Author: 
///
/// Description:
///-----------------------------------------------------------------------------


#ifndef THRUSTER_H
#define THRUSTER_H

#include "IThruster.h"
#include "string"

enum ThrusterLevel
{
   OFF = 0,
   _1 = 1,
   _2 = 2,
   _3 = 3
};

class Thruster : public IThruster
{
 public:
    explicit Thruster();
    virtual ~Thruster();

 public:
    std::string activate(int level) override;
    
};

#endif //THRUSTER_H

