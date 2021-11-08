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



int main()
{
    ofstream zapis;
    zapis.open("D:\\dz.txt");
    if (zapis.is_open())
    {
        for (int i = 0; i < 10; i++)
        {
            cin >> texttt;
            zapis << texttt << ' '; //endl;
        }

        zapis.close();

        res = 0;
        cout << "************************\n";
        ifstream chtenie;
        chtenie.open("D:\\dz.txt");

        if (chtenie.is_open())
        {
            while (getline(chtenie, line, ' '))
            {
                res += stoi(line);

            }
            chtenie.close();
            cout << res << endl;
        }
        else
        {
            cerr << "Файл не найден" << endl;
        }
    }
    else
    {

        cerr << "Файл не создан" << endl;
    }


}