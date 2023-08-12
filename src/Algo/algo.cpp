#include "algo.h"

#include <iostream>

Algo::Algo(int b) {
    this->a = b;
}

void Algo::foo_func(const int a) {
    int b = a;

    std::cout<<"Hello from Algo "<< b <<"\n";
}