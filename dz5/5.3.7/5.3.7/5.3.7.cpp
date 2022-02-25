#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
using namespace std;

string  l_line = "", line, vocab = ".?!";
string texttt;
string res;
int main()
{
    int cnt = INT_MAX;

    ifstream read_file("dz.txt", ios_base::in);

    if (read_file.is_open())
    {
        while (getline(read_file, line))
        {
            l_line = "";
            for (int i = 0; i < line.length(); i++)
            {
                l_line += line[i];
                if (vocab.find(line[i]) != string::npos)
                {
                    cout << l_line << endl;
                    if (l_line.length() < cnt)
                    {
                        cnt = l_line.length();
                        res = l_line;
                    }
                    i = i + 1;
                    l_line = "";
                }
            }


        }
        read_file.close();

    }
    else
    {
        cerr << "ERROR" << endl;
    }
    cout << "********************************";
    cout << endl << endl;
    cout << res;

}