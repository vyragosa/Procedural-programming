#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
using namespace std;
int n;
string* str;
string* res;
string ch = string("0123456789ABCDEF");
string SS(string str)
{
	bool k = false;
	int dem = 0;
	for (int i = str.length() - 1; i >= 0; i--)
	{
		for (int j = 0; j < 7; j++)
		{

			if (toupper(str[i]) == ch[j])
			{


				dem += j * pow(7, str.length() - i - 1);
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
		result += ch[dem % 3];
		dem = dem / 3;
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
	cout << "amount of numbers:\n";
	cin >> n;
	cout << "numbers:\n";
	str = new string[n];
	res = new string[n];
	for (int i = 0; i < n; i++)
	{
		cin >> str[i];
		res[i] = SS(str[i]);

	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << res[i] << " ";

	}


	delete[] str;
	delete[] res;
}
