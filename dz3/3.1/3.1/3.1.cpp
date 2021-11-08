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

	cout << "s,p,n:";
	cin >> S >> p >> n;
	r = p / 100;
	cout << "m=" << (S * r * pow(1 + r, n)) / (12 * (pow(1 + r, n) - 1));

}