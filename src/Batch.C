#pragma once
#include "../include/MathFunctions.h"
#include "../include/Batch.h"

#include <iostream>

Batch::Batch(std::vector<double> sites_for_birth, long num_particles, Geometry geom)
  :  birth_sites(sites_for_birth)
{
    bounds = geom.getBounds();
    for (long i = 0; i < num_particles; i++)
    {
        std::cout<<"starting particle "<<i+1<<std::endl;
        std::pair<double,int> _move_out;
        double x0 = birth_sites[i%birth_sites.size()];
        Particle _p(x0,geom);
        bool escape{false};
        while (true)      
        {
            _move_out = _p.move();
            if (_move_out.second == 0) break;
            if (_move_out.first < bounds.first || _move_out.first > bounds.second)
            {
                escape = true;
                break;
            }
            
        };
        if (!escape && _p.didFission() == 1)
        fission_sites.push_back(_move_out.first);
    }
    k_eff = fission_sites.size()*2.4 / num_particles;
    
    
}

std::vector<double> Batch::getFissionSites()
{
    return fission_sites;
}

double Batch::getBatchKeff()
{
    return k_eff;
}

