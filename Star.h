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

public:
    void InitReqLev();
    void InitTarget();
    void InitMVP();
    void DoStarCatch();
};

inline void Star::InitReqLev()
{
    cout << "Please enter Item Required Level(ex:100, 110, 120, 130, 140, 150, 160, 200) \n: ";
    cin >> ReqLev;
    if (ReqLev < 100 || ReqLev > 200 || ReqLev % 10 != 0 || (ReqLev >= 161 && ReqLev <= 199))
    {
        cout << "It's not a Valid number. ";
        Star::InitReqLev();
    }
}

inline void Star::InitTarget()
{
    cout << "How much would you like to enchant?";
    switch (ReqLev)
    {
    case 100:
        cout << "(100Lev item can be enchanted up to 8)\n: ";
        cin >> Target;
        if (Target > 8)
        {
            cout << "It's not a Valid number. ";
            Star::InitTarget();
        }
        break;

    case 110:
        cout << "(110Lev item can be enchanted up to 10)\n: ";
        cin >> Target;
        if (Target > 10)
        {
            cout << "It's not a Valid number. ";
            Star::InitTarget();
        }
        break;

    case 120:
        cout << "(120Lev item can be enchanted up to 15)\n: ";
        cin >> Target;
        if (Target > 15)
        {
            cout << "It's not a Valid number. ";
            Star::InitTarget();
        }
        break;

    case 130:
        cout << "(130Lev item can be enchanted up to 20)\n: ";
        cin >> Target;
        if (Target > 20)
        {
            cout << "It's not a Valid number. ";
            Star::InitTarget();
        }
        break;

    case 140:
        cout << "(140Lev item can be enchanted up to 25)\n: ";
        cin >> Target;
        if (Target > 25)
        {
            cout << "It's not a Valid number. ";
            Star::InitTarget();
        }
        break;

    case 150:
        cout << "(150Lev item can be enchanted up to 25)\n: ";
        cin >> Target;
        if (Target > 25)
        {
            cout << "It's not a Valid number. ";
            Star::InitTarget();
        }
        break;

    case 160:
        cout << "(160Lev item can be enchanted up to 25)\n: ";
        cin >> Target;
        if (Target > 25)
        {
            cout << "It's not a Valid number. ";
            Star::InitTarget();
        }
        break;

    case 200:
        cout << "(200Lev item can be enchanted up to 25)\n: ";
        cin >> Target;
        if (Target > 25)
        {
            cout << "It's not a Valid number. ";
            Star::InitTarget();
        }
        break;

    default:
        cout << "It's not a Valid number. ";
        break;
    }
}

inline void Star::InitMVP()
{
    cout << "Please enter your MVP Rank\nNone, Bronze: 0\nSilver      : 1\nGold        : 2\nDiamond, Red: 3\n: ";
    cin >> MVP;
    if (MVP > 3)
    {
        cout << "It's not a Valid number. ";
        Star::InitMVP();
    }
}

inline void Star::DoStarCatch()
{
    cout << "You wanna do StarCatch?(probability 4.5%p rises)(y/n)\n: ";
    cin >> ynstarcatch;
    if (ynstarcatch == 'y' || ynstarcatch == 'Y')
    {
        Starcatch = true;
        cout << "Starcatch True \n";
    }
    else if (ynstarcatch == 'n' || ynstarcatch == 'N')
    {
        Starcatch = false;
        cout << "Starcatch False \n";
    }
    else
    {
        cout << "It's not a Valid number. ";
        Star::DoStarCatch();
    }
}
#endif