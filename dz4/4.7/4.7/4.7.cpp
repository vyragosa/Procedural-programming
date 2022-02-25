#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
using namespace std;

int Rand(int m = 0, int i = 0, int c = 0) {
	int res = 0;
	for (int j = 1; j < i; j++) {
		res = (m * res + j) % c;
	}
	return res;
}
int main()
{

	cout << "1: " << Rand(37, 3, 64) << endl;
	cout << "2: " << Rand(25173, 13849, 65537);
}