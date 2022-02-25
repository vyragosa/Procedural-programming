#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
using namespace std;


int main()
{
	double n;
	double y = 0, fact = 1;
	cout << "n: ";
	cin >> n;
	if (n > 0)
	{
		for (int k = 1; k <= n; k++)
		{
			fact *= k;
			y += 1.0 / k;
		}
		cout << "result: " << fact / pow(y, n);
	}
	else
	{
		cout << "Error (n<=0) ";
	}
}