///-----------------------------------------------------------------------------
/// @file IThruster.h
///
/// Copyright (C) Circle Cardiovascular Imaging Inc. 2019
///
/// Author: 
///
/// Description:
///-----------------------------------------------------------------------------

#include <string>

#ifndef ITHRUSTER_H
#define ITHRUSTER_H

class IThruster 
{
 public:
    virtual ~IThruster(){}

 public:
    virtual std::string activate(int level) = 0; // PURE VIRTUAL!!!!!

};

#endif //ITHRUSTER_H