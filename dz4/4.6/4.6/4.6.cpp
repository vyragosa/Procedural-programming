#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
using namespace std;

string numb;
int  res, i, flag, nm, np, metka;

int NumbToInt(char numb)
{
	switch (toupper(numb))
	{
	case 'I':
		return 1;
		break;
	case 'V':
		return 5;
		break;
	case 'X':
		return 10;
		break;
	case 'L':
		return 50;
		break;
	case 'C':
		return 100;
		break;
	case 'D':
		return 500;
		break;
	case 'M':
		return 1000;
		break;
	default:
		return 0;
		break;
	}
}

int ConvNumb(string numb)
{
	metka = 0;
	flag = 1;
	res = NumbToInt(numb[0]);

	nm = res;
	for (int i = 1; i < numb.length(); i++)
	{
		np = NumbToInt(numb[i]);
		if ((metka != 0) && ((metka < np) || ((metka == np) && ((metka / pow(10, int(log10(metka))) == 5) && (nm < metka) || (nm > metka)))))
		{
			cerr << "ERROR (IVI, IXV, VIV)";
			return 0;

		}




		res = res + np;

		if (nm == np)
		{

			flag += 1;

			if ((np / pow(10, int(log10(np))) == 5) && (flag == 2))
			{
				cerr << "ERROR (VV)";
				return 0;
			}
			if (flag == 4)
			{
				cerr << "ERROR (IIII)";
				return 0;
			}
		}
		else
		{

			if (nm < np)
			{

				if (((np != 5 * nm) && (np != 10 * nm)) || (flag > 1))
				{
					cerr << "ERROR (IC, IIV)";
					return 0;
				}

				res = res - 2 * nm;
			}
			flag = 1;
			metka = nm;

		}
		nm = np;


	}
	return res;
}

int main()
{

	cin >> numb;
	res = ConvNumb(numb);
	if (res != 0)
	{
		cout << res;
	}
	return 0;

}