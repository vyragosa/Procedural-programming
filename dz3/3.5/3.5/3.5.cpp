#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

double N, n, R, h, x, a, korenn, b, y, m, r, S, p;
string texttt, line;
int  Nk;
int main()
{
    string f1, result;
    char temp;
    cin >> f1;


    int len;

    cout << "************************\n";


    for (int l = 0; l < f1.length() && l < 30; l++)
    {

        if (((f1[l] >= '\x41') && (f1[l] <= '\x5A')) || ((f1[l] >= '\x61') && (f1[l] <= '\x7A')))
        {
            result += f1[l];

        }

    }
    if (result.length() > 30)
    {
        len = 30;
    }
    else
    {
        len = result.length();
    }
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (toupper(result[j]) > toupper(result[j + 1]))
            {

                temp = result[j];
                result[j] = result[j + 1];
                result[j + 1] = temp;


            }
        }
    }
    cout << endl << result;

