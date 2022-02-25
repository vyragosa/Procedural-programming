#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <limits.h> 

using namespace std;
double min1, max1, max2, min2, s1, s2;
int pmin1, pmax1, pmin2, pmax2;

int main()
{
	double a[3][4] =
	{
	{5, 2, 0, 10},
	{3, 5, 2, 5},
	{20, 0, 0, 0}
	};
	double b[4][2] =
	{
		{1.20, 0.50},
		{2.80, 0.40},
		{5.00, 1.00},
		{2.00, 1.50}
	};
	double c[3][2] =
	{
	{0, 0},
	{0, 0},
	{0, 0}
	};
	/*
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				cout << "Amount of goods "<< j+1<<" sold by seller "<<i+1<<endl;
				cin >> a[i][j];
			}
		}
		double b[4][2];
		for (int j = 0; j < 2; j++)

		{
			for (int i = 0; i < 4; i++)
			{
				if (j == 0)
				{
					cout << "cost " << i+1 << endl;
				}
				else
				{
					cout << "Commission " << i+1 << endl;
				}
				cin >> b[i][j];
			}
		}
		*/

	int pmin1, pmax1;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			for (int k = 0; k < 4; k++)
			{
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	min1 = DBL_MAX;
	max1 = -DBL_MAX;
	min2 = DBL_MAX;
	max2 = -DBL_MAX;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << c[i][j] << ' ';
		}
		cout << endl;
	}
	cout << endl;


	for (int i = 0; i < 3; i++)
	{
		if (c[i][0] >= max1)
		{
			max1 = c[i][0];
			pmax1 = i + 1;
		}
		if (c[i][0] <= min1)
		{
			min1 = c[i][0];
			pmin1 = i + 1;
		}

		if (c[i][1] >= max2)
		{
			max2 = c[i][1];
			pmax2 = i + 1;
		}
		if (c[i][1] <= min2)
		{
			min2 = c[i][1];
			pmin2 = i + 1;
		}
		s1 += c[i][0];
		s2 += c[i][1];



	}
	cout << "Most and less money (seller): " << pmax1 << ' ' << pmin1 << endl;
	cout << "Most and less commission (seller): " << pmax2 << ' ' << pmin2 << endl;
	cout << "Total proceed, commission, amount of money: " << s1 << ' ' << s2 << ' ' << s1 + s2;
}