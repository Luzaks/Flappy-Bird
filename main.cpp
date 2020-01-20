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
    float bird_Gravity = 100.0f;

protected:
    virtual bool OnUserCreate()
    {
                return true;
    }
    virtual bool OnUserUpdate(float elapsedTime)
    {
        if(m_keys[VK_SPACE].bPressed)
        {
            bird_Acceleration = 0.0f;
            bird_Velocity = -bird_Gravity / 4.0f;
        }
        else
        {
            bird_Acceleration += bird_Gravity * elapsedTime;
            if(bird_Acceleration >= bird_Gravity) bird_Acceleration = bird_Gravity;
        }

        bird_Velocity += bird_Acceleration * elapsedTime;
        bird_Position += bird_Velocity * elapsedTime;

        Fill (0, 0, ScreenWidth(), ScreenHeight(), L' ');

        //The bird position in the screen.
        int bird_X = (int)(ScreenWidth()/3.0f);

        if (bird_Velocity > 0){
            DrawString(bird_X, bird_Position + 0, L"\\\\\\");
            DrawString(bird_X, bird_Position + 1, L"\\\\\\=Q");
        }
        else
        {
            DrawString(bird_X, bird_Position + 0, L"<///=Q");
            DrawString(bird_X, bird_Position + 1, L"///");
        }

        return true;
    }

};

int main() {
    OneLoneCoder_Flappy-Bird game;
    game.constructConsole(80, 48, 16, 16)

    return 0;
}