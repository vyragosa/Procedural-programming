#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <limits.h> 
using namespace std;
int j;
float a;
bool k;
int main()
{
    do
    {
        cout << "Enter number (must be natural and >2):\n";
        cin >> a;
        cout << endl;
    } while ((a <= 2) || (a != (int)a));
    k = true;
    j = 3;
    for (int i = 2; i <= a; i++)
    {
        while ((k == true) && (j < i / 2))
        {

            if ((i % j) == 0)
            {
                k = false;
            }
            j += 1;
        }
        if (k == true)
        {
            cout << i << endl;
        }
        j = 2;
        k = true;
    }

}