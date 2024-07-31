#pragma once

#include "Particle.h"
#include "Geometry.h"
#include <vector>
class Batch
{
private:
    std::vector<double> fission_sites;
    std::vector<double> birth_sites;
    std::vector<double> k_eff;
    std::vector<double> scalar_flux;
public:
    Batch(std::vector<double> sites_for_birth, long num_particles, Geometry geom);
    ~Batch() = default;
    double getBatchKeff();

    std::vector<double> getBatchFlux();

    double getBatchAverageFlux();

};

