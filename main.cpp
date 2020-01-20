#include <iostream>
#include <string>
using namespace std;

#include "olcConsoleGameEngine.h"


class OneLoneCoder_Flappy-Bird : public olcConsoleGameEngine {

public:
    OneLoneCoder_Flappy-Bird()
    {
        app_Name = L"Flappy Bird";
    }

private:
    float bird_Position = 0.0f;
    float bird_Velocity = 0.0f;
    float bird_Acceleration = 0.0f;

protected:

};

int main() {
    OneLoneCoder_Flappy-Bird game;
    game.constructConsole(80, 48, 16, 16)

    return 0;
}