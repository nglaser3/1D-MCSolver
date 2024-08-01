#pragma once
#include <cstdlib>
#include <vector>

double Random()
{
    double _top =  std::rand();
    double _bottom = RAND_MAX;
    return _top/_bottom;
}

std::vector<double> RandomVec(long num,double lb, double rb)
{
    double b{rb-lb};
    std::vector<double> vec{};
    for (long i = 0; i < num; i++)
    {
        vec.push_back(Random()*b + lb);
    }
    return vec;
}