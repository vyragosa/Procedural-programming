#define _USE_MATH_DEFINES
#define Contest1	S = 1000000; n = 20; m = 4171.04; //р = 0.01
#define Contest2	S = 1000000; n = 20; m = 13313.5; //р = 15
#define Contest3	S = 1000000; n = 19; m = 10294.2; //р = 10.5
#define Contest4	S = 120; n = 1; m = 10; //р = 0
#include <math.h>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

double  r, n, m, S, p, m0;

int main()
{
	cout << "s,n,m:" << endl;
	Contest2
		//	cin >> S >> n >> m;
		if (m >= (S / 12))
		{
			cout << "p=" << 0 << endl;
		}
		else
		{
			p = 0;
			while (m0 - m <= 1)
			{
				p = p + 0.01;
				r = p / 100;
				m0 = (S * r * pow(1 + r, n)) / (12 * (pow(1 + r, n) - 1));
			}
			cout << p - 0.01;
		}
}