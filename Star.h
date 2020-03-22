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
    bool Starcatch;

public:
    void InitReqLev();
    void InitTarget();
    void InitMVP();
    void DoStarCatch();
};

inline void Star::InitReqLev()
{
    cout << "Please enter Item Required Level(ex:100, 110, 120, 130, 140, 150, 160, 200) \n:";
    cin >> ReqLev;
    if (ReqLev < 100 || ReqLev > 200 || ReqLev % 10 != 0 || (ReqLev >= 161 && ReqLev <= 199))
    {
        cout << "It's not a Valid number. ";
        Star::InitReqLev();
    }
}

#endif