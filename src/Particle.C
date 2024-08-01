#pragma once
#include "../include/Particle.h"
#include "../include/MathFunctions.h"

std::pair<double, int> Particle::move()
{
    Cell* cell = _geometry.getCell(cellIndex());

    double _dist = sampleDistance(_location,cell->getTot()) * sampleDirection();
    
    _location += _dist;
    std::pair<double,int> _pair
        {
        _location,sampleInteraction(_location,
        cell->getAbs(), cell->getAbs()+cell->getSct())
        };
    return _pair;
}

int Particle::didFission()
{
    Cell* cell = _geometry.getCell(cellIndex());
    if (
        sampleInteraction(_location,cell->getFis()/2.4, 
        cell->getAbs()+ cell->getFis()/2.4)
        ) return 1;
    return 0;
}

int Particle::cellIndex()
{
    return _geometry.getCellIndex(_location);
}