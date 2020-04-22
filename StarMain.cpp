#include <iostream>
#include "Star.h"

using namespace std;

int main()
{
    Star star;
    star.InitReqLev();
    star.InitTarget();
    star.InitMVP();
    star.DoStarCatch();
    star.InitOIP();
    // star.StarForce();
}