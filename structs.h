#include <iostream>

using namespace std;

struct Coords
{
    int i;
    int j;
};

struct Status
{
    Coords coords;
    int lives;
    char current_direction;
    char input_direction;
};

