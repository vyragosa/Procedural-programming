#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
using namespace std;
int n;
float temp;


int main()
{
	cout << "array[i][j]:\n";
	int dim1;
	int dim2;
	cin >> dim1 >> dim2;
	cout << "**********************\n";

	float** array = new float* [dim1];
	for (int i = 0; i < dim1; i++) {
		array[i] = new float[dim2 + 1];
	}

	for (int i = 0; i < dim1; i++)
	{
		array[i][dim2] = 0;
		cout << "Row " << i + 1 << endl;
		for (int k = 0; k < dim2; k++)
		{
			cin >> array[i][k];
			array[i][dim2] += array[i][k];
		}
		array[i][dim2] /= dim2;
	}

	for (int i = 0; i < dim1; i++)
	{
		for (int j = 0; j < dim1 - i - 1; j++)
		{
			if (array[j][dim2] < array[j + 1][dim2])
			{
				for (int k = 0; k < dim2 + 1; k++)
				{
					temp = array[j][k];
					array[j][k] = array[j + 1][k];
					array[j + 1][k] = temp;
				}
			}
		}
	}
	cout << "**********************\n";
	for (int i = 0; i < dim1; i++)
	{
		for (int k = 0; k < dim2 + 1; k++)
		{
			if (k == dim2)
			{
				cout << "middle: " << array[i][k];
			}
			else
			{
				cout << array[i][k] << '\t';
			}

		}
		cout << endl;
	}
}
