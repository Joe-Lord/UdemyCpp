#include <cstdint>
#include <iostream>

#include "exercise.h"

namespace computation
{

// Exercise 1
double mean_array_value(int *array, const std::size_t length)
{

    double sum_int = 0;
    double mean_int = 0;
    for (std::uint32_t i = 0; i < length; i++){

        sum_int += array[i];

    }
    mean_int = sum_int/length;
    return mean_int;

}

double mean_array_value(double *array, const std::size_t length)
{
    double sum_double = 0;
    double mean_double = 0;
    for (std::uint32_t i = 0; i < length; i++){

        sum_double += array[i];

    }
    mean_double = sum_double/length;
    return mean_double;

}

void declaration(){

    struct Dataset
{
    double mean_array_a;
    double mean_array_b;
};
}


}
