//
// Created by cjh1123 on 5/1/2018.
//

#include "Box.h"

Box::Box(double len, double w, double h) : (length = len, width = w, height = h)
{
    // no-op
}

double Box::getVolume() const
{
    return length * width * height;
}