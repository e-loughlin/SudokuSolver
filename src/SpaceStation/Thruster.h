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

#include <QObject>


class Thruster : public QObject, public IThruster
{
Q_OBJECT

 public:
    explicit Thruster();
    virtual ~Thruster();

 public:

 private:

};

#endif //THRUSTER_H