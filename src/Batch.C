#pragma once

#include "../include/Batch.h"

Batch::Batch(std::vector<double> sites_for_birth, long num_particles, Geometry geom)
  :  birth_sites{sites_for_birth}
{
    for (long i = 0; i < num_particles; i++)
    {
        
    }
    
}