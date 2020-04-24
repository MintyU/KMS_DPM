#include <iostream>
#include "Star.h"

using namespace std;

int main()
{
    Star star;
    star.InitReqLev();
    star.InitTarget();
    star.DoStarCatch();
    star.InitMVP();
    star.InitOIP();
    star.StarForce();
    //star.Valuecheck();
}