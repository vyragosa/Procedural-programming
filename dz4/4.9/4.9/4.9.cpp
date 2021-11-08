#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
using namespace std;

string ch = string("0123456789ABCDEF");
string SS(string str, int ibase, int obase)
{
	bool k = false;
	int dem = 0;
	for (int i = str.length() - 1; i >= 0; i--)
	{
		for (int j = 0; j < ibase; j++)
		{

			if (toupper(str[i]) == ch[j])
			{


				dem += j * pow(ibase, str.length() - i - 1);
				k = true;
			}
		}
		if (k == false)
		{
			return "error";
		}
		k = false;
	}


	string result = "";
	while (dem > 0)
	{
		result += ch[dem % obase];
		dem = dem / obase;
	}


	string rev = "";
	for (int i = result.length() - 1; i >= 0; i--)
	{
		rev += result[i];
	}

	return rev;

}
int main()
{
	string str;
	int ibase;
	int obase;
	cin >> str;
	cin >> ibase;
	cin >> obase;
	cout << SS(str, ibase, obase);

}
