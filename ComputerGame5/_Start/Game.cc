#include <cstdint>
#include <iostream>

#include "Game.h"

namespace
{



constexpr std::uint32_t LEN_X = 5;
constexpr std::uint32_t LEN_Y = 5;

constexpr Coordinate START ={.x=0, .y=0};
constexpr Coordinate GOAL ={.x=LEN_X-1, .y=LEN_Y-1};

constexpr char LEFT = 'a';
constexpr char RIGHT = 'd';
constexpr char UP = 'w';
constexpr char DOWN = 's';
}; // namespace

bool is_finished(const Coordinate player)
{
    if(player.x == GOAL.x && player.y == GOAL.y){
    return true;
    }
    else{
        return false;
    }
}

void print_game_state(const Coordinate player)
{
    for(std::uint32_t j = START.y; j < LEN_Y; j++){
    for (std::uint32_t i = START.x; i < LEN_X; i++)
    {
        if (i == player.x && j == player.y)
        {
            std::cout << 'P';
        }
        else if ((i == GOAL.x && j == GOAL.y) || (i == START.x && j == START.y))
        {
            std::cout << '|';
        }
        else
        {
            std::cout << '.';
        }
    }
    std::cout << '\n';
}
}



void execute_move( Coordinate &player, const char move)
{
    if (LEFT == move && player.x > 0)
    {
        player.x--;
    }
    else if (RIGHT == move && player.x < (LEN_X))
    {
        player.x++;
    }
    else if (DOWN == move && player.y < (LEN_Y))
    {
        player.y++;
        }
    else if (UP == move && player.y > 0)
    {
        player.y--;
    }
    else
    {
        std::cout << "Unrecognized move!\n";
    }
}

void game()
{
    Coordinate player = START;
    char move;

    while (true)
    {
        if (is_finished(player))
        {
            break;
        }

        print_game_state(player);
        std::cin >> move;
        execute_move(player, move);
    }
}
