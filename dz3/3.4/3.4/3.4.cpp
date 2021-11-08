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

    string t1;
    string filter = "0123456789";
    ifstream chtenie;
    chtenie.open("D:\\dz2.txt");

    if (chtenie.is_open())
    {
        while (getline(chtenie, t1))
        {
            for (int j = 0; j < t1.length(); j++)
            {
                if ((t1[j] <= '\x39') && (t1[j] >= '\x30'))
                {
                    cout << t1[j];
                }
            }
            /*           for (int j = 0; j < t1.length(); j++)
                       {

            for (int k = 0; k < filter.length(); k++)
            {
                if (t1[j] == filter[k]) {
                    cout << t1[j];
                }
            }

        }*/
            cout << endl;
        }
        chtenie.close();
    }
    else
    {
        cerr << "Файл не найден" << endl;
    }

}
