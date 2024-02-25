#include <algorithm>
#include <iostream>
#include <vector>
#include <cstdint>

#include "exercise.h"

// Exercise 2
VectorT max_row_values(MatrixT &matrix)
{
    auto max_vector_row = VectorT(matrix.size(), 0.0);

    for (std::size_t i = 0; i != matrix.size(); ++i)
    {
        double max_value_row = 0.0;

            if (!matrix.size() || !matrix[i].size())
        {

            return max_vector_row;
        }

        for (std::size_t j = 0; j != matrix[i].size(); ++j)
        {
            if (matrix[i][j]>max_value_row){

                max_value_row = matrix[i][j];
            }
        max_vector_row[i] = max_value_row;
        }

    }
    return max_vector_row;
}

// Exercise 3
ValueT sort_and_max(VectorT &vec)
{

    std::sort(vec.begin(), vec.end());

        return vec[vec.size()-1];

}
