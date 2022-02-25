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
    ofstream to_file("dz.txt", ios_base::app);
    if (to_file.is_open())
    {
        for (int i = 0; i < 1; i++)
        {
            cin >> texttt;
            to_file << texttt << ' '; ;
        }

        to_file.close();

        cout << endl;

        ifstream read_file("dz.txt", ios_base::in);

        if (read_file.is_open())
        {
            while (getline(read_file, line, ' '))
            {
                cout << line << endl;

            }
            read_file.close();

        }
        else
        {
            cerr << "ERROR" << endl;
        }
    }
    else
    {

        cerr << "ERROR" << endl;
    }


}