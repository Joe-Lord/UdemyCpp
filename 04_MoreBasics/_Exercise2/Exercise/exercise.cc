#include <iostream>

#include "exercise.h"

void print_player_pos(const PlayerData &player)
{
    std::cout << "HEALTH: " << player.health <<'\n';
    std::cout << "Pos: ()" << player.x_pos << ", " << player.y_pos << ")\n";


    switch (player.alliance)
    {
    case Alliance::ENEMY:
    {
        std::cout << "Team Enemy" << '\n';
        break;
    }
    case Alliance::ALLIED:
    {
        std::cout << "Team Allied" << '\n';
        break;
}
    }

    }
