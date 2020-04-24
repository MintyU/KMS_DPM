#include <iostream>
#include "Star.h"
#include <cstdlib>
#include <random>
#include <ctime>

using namespace std;

const float prob[25][4] =
    {
        {95, 5, 0, 0},
        {90, 10, 0, 0},
        {85, 15, 0, 0},
        {85, 15, 0, 0},
        {80, 20, 0, 0},
        {75, 15, 0, 0},
        {70, 30, 0, 0},
        {65, 35, 0, 0},
        {60, 40, 0, 0},
        {55, 45, 0, 0},
        {50, 50, 0, 0},
        {45, 0, 55, 0},
        {40, 0, 59.4, 0.6},
        {35, 0, 63.7, 1.3},
        {30, 0, 68.6, 1.4},
        {30, 67.9, 0, 2.1},
        {30, 0, 67.9, 2.1},
        {30, 0, 67.9, 2.1},
        {30, 0, 67.2, 2.8},
        {30, 0, 67.2, 2.8},
        {30, 63.0, 0, 7.0},
        {30, 0, 63.0, 7.0},
        {3, 0, 77.6, 19.4},
        {2, 0, 68.6, 29.4},
        {1, 0, 59.4, 39.6}};

const int price[25][8] =
    {
        {41000, 54200, 70100, 88900, 110800, 136000, 164800, 321000},
        {81000, 107500, 139200, 176800, 220500, 271000, 328700, 641000},
        {121000, 160700, 208400, 264600, 330300, 406000, 492500, 961000},
        {161000, 214000, 277500, 352500, 440000, 541000, 656400, 1281000},
        {201000, 267200, 346600, 440400, 549800, 676000, 820200, 1601000},
        {241000, 320400, 415700, 528300, 659600, 811000, 984000, 1921000},
        {281000, 373700, 484800, 616200, 769300, 946000, 1147900, 2241000},
        {321000, 426900, 554000, 704000, 879100, 1081000, 1311700, 2561000},
        {0, 480200, 623100, 791900, 988800, 1216000, 1475600, 2881000},
        {0, 533400, 692000, 879800, 1098600, 1351000, 1639400, 3201000},
        {0, 0, 2801600, 3561700, 4448200, 5470800, 6639400, 12966500},
        {0, 0, 3543200, 4504600, 5625900, 6919400, 8397300, 16400100},
        {0, 0, 4397700, 5591100, 6982900, 8588400, 10422900, 20356300},
        {0, 0, 5371700, 6829300, 8529400, 10490600, 12731500, 24865300},
        {0, 0, 6471400, 8227500, 10275700, 12638500, 15338200, 29956500},
        {0, 0, 0, 19586000, 24462200, 30087200, 36514500, 71316500},
        {0, 0, 0, 23069100, 28812500, 35437900, 43008300, 83999600},
        {0, 0, 0, 26918600, 33620400, 41351400, 50185100, 98016700},
        {0, 0, 0, 31149300, 38904500, 47850600, 58072700, 113422300},
        {0, 0, 0, 35776100, 44683300, 54958200, 66698700, 130270000},
        {0, 0, 0, 0, 50974700, 62696400, 76090000, 148612400},
        {0, 0, 0, 0, 57796700, 71087200, 86273300, 168501500},
        {0, 0, 0, 0, 65166700, 80152000, 97274600, 189988600},
        {0, 0, 0, 0, 73102200, 89912300, 109120000, 213124000},
        {0, 0, 0, 0, 81620200, 100389000, 121834900, 237957700}};

void Star::InitReqLev()
{
    cout << "Please enter Item Required Level(ex:100, 110, 120, 130, 140, 150, 160, 200) \n: ";
    cin >> ReqLev;
    if (ReqLev < 100 || ReqLev > 200 || ReqLev % 10 != 0 || (ReqLev >= 161 && ReqLev <= 199))
    {
        cout << "It's not a Valid number. ";
        Star::InitReqLev();
    }
}

void Star::InitTarget()
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

void Star::DoStarCatch()
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

void Star::InitOIP()
{
    cout << "Please enter the original price of item(lowest price in oction)\n: ";
    cin >> OriginalItemPrice;
    Meso = OriginalItemPrice;
}

// temporary
void Star::Valuecheck()
{
    cout << endl
         << ReqLev << endl;
    cout << Target << endl;
    cout << MVP << endl;
    cout << ynstarcatch << endl;
    cout << Starcatch << endl;
}

void Star::InitMVP()
{
    cout << "Please enter your MVP Rank\nNone, Bronze: 0\nSilver      : 1\nGold        : 2\nDiamond, Red: 3\n: ";
    cin >> MVP;
    if (MVP > 3)
    {
        cout << "It's not a Valid number. ";
        Star::InitMVP();
    }
}

void Star::StarForce()
{
    int currentStar = 0;
    float SCBONUS = 0;
    int LEVEL = 0;
    int STACK = 0;
    Meso = 0;
    if (Starcatch)
    {
        SCBONUS = 4.5;
    }
    if (ReqLev == 100)
    {
        LEVEL = 0;
    }
    else if (ReqLev == 110)
    {
        LEVEL = 1;
    }
    else if (ReqLev == 120)
    {
        LEVEL = 2;
    }
    else if (ReqLev == 130)
    {
        LEVEL = 3;
    }
    else if (ReqLev == 140)
    {
        LEVEL = 4;
    }
    else if (ReqLev == 150)
    {
        LEVEL = 5;
    }
    else if (ReqLev == 160)
    {
        LEVEL = 6;
    }
    else if (ReqLev == 200)
    {
        LEVEL = 7;
    }
    srand((unsigned int)time(NULL));
    cout << "STARFORCE START" << endl;
    // cout << (rand() % 1000 / 10);
    while (currentStar < Target)
    {
        float randomnum = (rand() % 1000 / 10);
        if (MVP == 0)
        {
            Meso += price[currentStar][LEVEL];
        }
        else if (MVP == 1)
        {
            Meso += price[currentStar][LEVEL] * 97 / 100;
        }
        else if (MVP == 2)
        {
            Meso += price[currentStar][LEVEL] * 95 / 100;
        }
        else if (MVP == 3)
        {
            Meso += price[currentStar][LEVEL] * 90 / 100;
        }

        if (STACK == 2)
        {
            currentStar += 1;
            cout << "CHANCETIME!" << endl;
            cout << "+" << currentStar << " SUCCESS" << endl;
            STACK = 0;
            continue;
        } // chance time!

        if (randomnum <= prob[currentStar][0] + SCBONUS)
        {
            currentStar += 1;
            STACK = 0;
            cout << "+" << currentStar << " SUCCESS" << endl;
            continue;
        }

        if (randomnum <= prob[currentStar][0] + prob[currentStar][1])
        {
            cout << "+" << currentStar + 1 << " FAIL(maintain)" << endl;
            continue;
        }

        if (randomnum <= prob[currentStar][0] + prob[currentStar][1] + prob[currentStar][2])
        {
            cout << "+" << currentStar << " FAIL(degrade)" << endl;
            currentStar -= 1;
            STACK += 1;
            continue;
        }

        if (randomnum <= prob[currentStar][0] + prob[currentStar][1] + prob[currentStar][2] + prob[currentStar][3])
        {
            cout << "+" << currentStar << " FAIL(DESTROYED)" << endl;
            currentStar = 12;
            STACK = 0;
            Meso += OriginalItemPrice;
            continue;
        }
    }
    cout << "Total " << Meso << "meso Used!";
}
