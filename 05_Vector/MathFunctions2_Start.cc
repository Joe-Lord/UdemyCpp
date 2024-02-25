#include <cmath>
#include <iostream>
#include <vector>

// Aufgabe: Verwende ranged-based for loops für die Funktionen!

void fill_vector(std::vector<double> &vec)
{
    int i =0;
    for (auto &val : vec)
    {
        val = static_cast<double>(i);
        i++;
    }
}

void print_vector(const std::vector<double> &vec)
{
    int i =0;
    for (const auto &val : vec)
    {
        std::cout << "Vec[" << i << "] = " << val << '\n';
        i++;
    }
    std::cout << '\n';
}

void exp_vector(std::vector<double> &vec)
{
    for (auto &val : vec)
    {
        val = std::exp(val);
    }
}

void log_vector(std::vector<double> &vec)
{
    for (auto &val : vec)
    {
        val = std::log(val);
    }
}

int main()
{
    auto my_vector = std::vector<double>(3, 0.0);

    fill_vector(my_vector);
    print_vector(my_vector);

    exp_vector(my_vector);
    print_vector(my_vector);

    log_vector(my_vector);
    print_vector(my_vector);

    for (auto &val : my_vector){
    std::cout << val <<std::endl;
    }
    return 0;
}
