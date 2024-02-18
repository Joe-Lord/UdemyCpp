#include <cstdint>
#include <iostream>


void push_back(int *&input_array, int &size, int new_value)
{

    size = size + 1;
    auto *array_push = new int[size];

    for (int i = 0; i < size; i++)
    {
        if (i < size - 1)
        {
            array_push[i] = input_array[i];

            std::cout << "Wert für Position " << i << " " << array_push[i]
                      << std::endl;
        }
        else
        {

            array_push[size - 1] = new_value;

            /*std::cout << "Wert für Position " << size - 1 << " "
                      << array_push[size - 1] << std::endl;*/
        }


    }
    delete[] input_array;

    input_array = array_push;
}


void push_pop(int *&input_array, int &size)
{

    size = size -1;
    auto *array_push = new int[size];

    for (int i = 0; i < size; i++)
    {
            array_push[i] = input_array[i];

            std::cout << "Wert für Position " << i << " " << array_push[i]
                      << std::endl;


    }
      delete[] input_array;

    input_array = array_push;

}


 int main()
        {
            int len1 = 3;
            char modification;
            auto *array1 = new int[len1];
            array1[0] = 5;
            array1[1] = 6;
            array1[2] = 7;

            while (len1 < 10 && len1 > 0)
            {
                std::cout << "Do you want to add an Element? Press + to add - to substract"
                          << std::endl;
                std::cin >> modification;
                if (modification == '+')
                {

                    int new_value = 0;
                    std::cout << "Enter new Value" << std::endl;
                    std::cin >> new_value;
                    push_back(array1, len1, new_value);
                }
                else if(modification == '-')
                {

                    push_pop(array1, len1);
                }

                else{

                    std::cout << "Ungültige Eingabe" << std::endl;

                }
        for( int i = 0; i <len1; i++){
        std::cout << "KONTROLLE " << i << " " << array1[i]
                      << std::endl;
        }
            }
        }
