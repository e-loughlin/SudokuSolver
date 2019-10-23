///-----------------------------------------------------------------------------
/// @file Thruster.cpp
///
/// Copyright (C) Circle Cardiovascular Imaging Inc. 2019
///
/// Author: 
///
/// Description:
///-----------------------------------------------------------------------------


#include "Thruster.h"

Thruster::Thruster()
{
}

Thruster::~Thruster()
{
}

std::string Thruster::activate(int level)
{
    switch(level)
    {
        case 1:
            return "Ruuummmbbbllleee";
        case 2:
            return "Vrrrrrrrrrrrrrrrrrrrr";
        case 3:
            return "WOOOOOOOOSSSSSHHHHHHHHH!!!!";
        default:
            return "";
    }
}   

