#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <limits.h> 
#include<iostream>
using namespace std;

int  x, y;

int NOD1(int x, int y)
{
    while (x != 0 && y != 0)
    {
        if (x >= y)
        {
            x = x % y;
        }
        else
        {
            y %= x;
        }
    }


    return x + y;
}
int NOD2(int x, int y) {
    while (x != y)
    {
        if (x > y)
        {
            x -= y;
        }

        else
        {
            y -= x;
        }
    }

    return x;
}
int main()
{
    cout << "x, y: ";
    cin >> x >> y;
    cout << "NOD1:" << NOD1(x, y) << endl << "NOD2:" << NOD2(x, y);
}