#pragma once
#include "Random.h"
#include <cmath>
#include <vector>

double sampleDistance(double _x0, double _totalxs)
{
    return std::log(Random())/_totalxs;
}

double sampleDirection()
{
    return (2*Random() - 1);
}

int sampleInteraction(double _x0, double xs, double tot)
{
    double _r{Random()};

    if (_r<xs/tot) 
        return 0;

    return 1;
}

double factorial(int input)
{
    double value = 1;
    for (int i = 1; i <= input; i++)
    {
        value *= i;
    }
    return value;
}

double binomial_coeff(int n, int k)
{
    return factorial(n) / factorial(k) / factorial(n-k);
}