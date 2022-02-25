#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <limits.h> 
using namespace std;
string tempc;
int temp;
int main()
{
	setlocale(LC_ALL, "rus");
	string country[10]
	{
		"Germany",
		"Norway",
		"Russia",
		"Austria",
		"Canada",
		"USA",
		"Finland",
		"Japan",
		"China",
		"Korea",
	};
	int array[10][5] =
	{
		{12,9,8,0,0},
		{10,10,5,0,0},
		{9,6,3,0,0},
		{3,5,9,0,0},
		{6,5,4,0,0},
		{6,3,4,0,0},
		{2,4,6,0,0},
		{5,1,4,0,0},
		{0,6,2,0,0},
		{3,1,2,0,0},
	};
	/*	for (int i = 0; i < 10; i++)
		{
			cout << country[i] << ": " << endl;;
			for (int j = 0; j < 3; j++)
			{
				switch (j)
				{
				case 0:
					cout << "Gold: ";
					break;
				case 1:
					cout << "Silver: ";
					break;
				case 2:
					cout << "Bronze: ";
					break;
				}
				cin >> array[i][j];
			}
			cout << endl;
		}
		*/

	for (int i = 0; i < 10; i++)
	{
		array[i][3] = array[i][0] + array[i][1] + array[i][2];
		array[i][4] = 7 * array[i][0] + 6 * array[i][1] + 5 * array[i][2];
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10 - i - 1; j++)
		{
			if (country[j] > country[j + 1])
			{
				tempc = country[j];
				country[j] = country[j + 1];
				country[j + 1] = tempc;
				for (int k = 0; k < 5; k++)
				{
					temp = array[j][k];
					array[j][k] = array[j + 1][k];
					array[j + 1][k] = temp;
				}
			}
		}
	}
	ofstream zapis;
	zapis.open("dz.txt");
	if (zapis.is_open())
	{
		for (int i = 0; i < 10; i++)
		{
			zapis << country[i] << " -->";
			for (int j = 0; j < 5; j++)
			{
				zapis << "\t" << array[i][j];
			}
			zapis << endl;
		}
		zapis.close();
	}
	else
	{
		cerr << "Файл не создан" << endl;
	}
}
