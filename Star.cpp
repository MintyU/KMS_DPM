#include <iostream>
#include "Star.h"

using namespace std;

void Star::InitReqLev()
{
    cout << "Please enter Item Required Level(ex:100, 110, 120, 130, 140, 150, 160, 200) \n :";
    cin >> ReqLev;
    if (ReqLev != 100 || ReqLev != 110 || ReqLev != 120 || ReqLev != 130 || ReqLev != 140 || ReqLev != 150 || ReqLev != 160 || ReqLev != 200)
    {
        cout << "Please enter Valid number(ex:100, 110, 120, 130, 140, 150, 160, 200) \n :";
        cin >> ReqLev;
    }
}