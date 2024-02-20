#include <iostream>

#include "exercise.h"



int main()
{
    const auto Andi = PlayerData{.id = 0,
                               .x_pos = 10.0F,
                               .y_pos = 1.0F,
                               .health = 100,
                               .energy = 50,
                               .alliance = Alliance::ALLIED};
    const auto Hanz = PlayerData{.id = 0,
                               .x_pos = 12.0F,
                               .y_pos = 6.0F,
                               .health = 80,
                               .energy = 50,
                               .alliance = Alliance::ALLIED};

    print_player_pos(Andi);
    print_player_pos(Hanz);

    return 0;
}
