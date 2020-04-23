#ifndef STAR_H
#define STAR_H

#include <iostream>
using namespace std;
class Star
{
private:
    int ReqLev;
    int Target;
    int MVP;
    char ynstarcatch;
    bool Starcatch;
    unsigned long long Meso;
    unsigned int OriginalItemPrice;

public:
    void InitReqLev();
    void InitTarget();
    void InitMVP();
    void DoStarCatch();
    void InitOIP();
    void StarForce();
    void Valuecheck();
};


#endif