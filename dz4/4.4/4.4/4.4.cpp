#define _USE_MATH_DEFINES
#define RED '|'   //макрос 
#define WHITE ' ' //макрос 

#include <math.h>
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
using namespace std;


void flag_line(char color, int just_line = 0, int no_star = 0)
{
    int k;
    if (just_line == 1) {
        for (int i = 0; i < 8; i++)
        {
            if (no_star == 1)
                cout << "  ";
            else
                cout << "* ";
        }
        k = 24;
    }
    else
    {
        k = 40;
    }
    for (int j = 0; j < k; j++)
    {
        cout << color;
    }
    cout << endl;
}

int main()
{
    for (int i = 0; i < 3; i++)
    {
        flag_line(RED, 1);
        flag_line(WHITE, 1);

    }
    flag_line(RED, 1, 1);
    for (int j = 0; j < 3; j++)
    {
        flag_line(WHITE);
        flag_line(RED);
    }
}