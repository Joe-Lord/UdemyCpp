#include <cstdint>
#include <iostream>

#include "exercise.h"


std::int32_t *array_constructor(const std::int32_t value,
                                const std::size_t length)
{
    auto *p = new int[length];
    for (int i = 0; i < length; i++)
    {
        p[i] = value;

    }

    return p;
}


int main()
{
    int value = 7;
    int length = 4;
    auto *array = array_constructor(value, length);

    for (int i = 0; i < length; i++)
    {
    std::cout << "Array_Pos " << i << " ist:" << *array << std::endl;
    }
}
