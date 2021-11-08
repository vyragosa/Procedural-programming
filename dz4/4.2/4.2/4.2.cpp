#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
using namespace std;

double N, n, R, h, x, a, korenn, b, y, m, r, S, p;
string  line;
int texttt, res;
int  Nk;

int sign(int x)
{
    if (x > 0)
    {
        return 1;
    }
    else if (x == 0)
    {
        return 0;
    }
    else
    {
        return -1;
    }
}

int main()
{

    cin >> x;
    cout << sign(x);
}