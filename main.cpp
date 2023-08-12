/**
 * The Strategy interface declares operations common to all supported versions
 * of some algorithm.
 *
 * The Context uses this interface to call the algorithm defined by Concrete
 * Strategies.
 */
#include <iostream>
#include <string>
#include <memory>
#include <algorithm>
#include "algo.h"
#include "math_util.h"
#include "location.h"
#include "structure.h"
#include "geographics.h"


int main()
{
    MathUtil math;
    math.foo_func(25);
    Algo algo;
    algo.foo_func(25);
    Location loc;
    loc.foo_func(25);
    Structure structure;
    structure.foo_func(25);
    Geoographics geo;
    geo.foo_func(25);
  
    return 0;
}