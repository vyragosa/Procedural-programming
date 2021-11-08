#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
using namespace std;

double accu, N, n, R, h, x, a, korenn, b, y, m, r, S, p;
string  line;
int texttt, res;
int  Nk;



int main()
{
	accu = 0.061;
	for (double y = 1; y >= -1; y -= 0.1)
	{
		for (double x = -3 * M_PI; x < 3 * M_PI; x += M_PI / 20)
		{
			if (abs(sin(x) - y) >= accu)
			{
				if (abs(x) < accu)
				{
					cout << "|";
				}
				else if (abs(y) < accu)
				{
					cout << "-";
				}
				else
				{
					cout << " ";
				}
			}
			else
			{
				cout << '*';
			}
		}
		cout << endl;
	}
}