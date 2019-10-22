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

class QString;

class Thruster : public IThruster
{
 public:
    explicit Thruster();
    virtual ~Thruster();

 public:
    QString activate(int level) override;
};

#endif //THRUSTER_H

