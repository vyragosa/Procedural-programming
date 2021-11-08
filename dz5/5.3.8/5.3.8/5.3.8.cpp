#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
using namespace std;

string  line;
string texttt;


int main()
{
    setlocale(LC_ALL, "rus");
    /*   ofstream zapis;
       zapis.open("dz.txt");
       if (zapis.is_open())
       {
           for (int i = 0; i < 5; i++)
           {
               cin >> texttt;
               zapis << texttt << endl;
           }

           zapis.close();
           */
    ifstream chtenie;
    chtenie.open("dz.txt");

    if (chtenie.is_open())
    {
        while (getline(chtenie, line))
        {
            for (int i = 0; i < line.length(); i++)
            {
                cout << int(line[i]);
                //   cout << int(line[i])<<' ';
            }
            cout << endl;

        }
        chtenie.close();
    }
    else
    {
        cerr << "Файл не найден" << endl;
    }
    /* }
     else
     {

         cerr << "Файл не создан" << endl;
     }*/
}


