#include <iostream>
#include <string>
#include <cstring>
using namespace std;

string numb;
int  res;

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
	int first_rank;
	int third_rank = 0;
	int flag = 1;
	res = NumbToInt(numb[0]);
	int second_rank = res;
	for (int i = 1; i < numb.length(); i++)
	{
		first_rank = NumbToInt(numb[i]);
		if ((third_rank != 0) && ((third_rank < first_rank) || (first_rank == third_rank) && ((second_rank > first_rank) || (to_string(first_rank)[0] == '5'))))
		{
			cerr << "ERROR (3 ranks)";
			return 0;
		}
		res = res + first_rank;

		if (first_rank == second_rank)
		{
			flag += 1;

			if ((to_string(first_rank)[0] == '5') && (flag == 2))
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
			flag = 1;
			if (second_rank < first_rank)
			{
				if (((first_rank != 5 * second_rank) && (first_rank != 10 * second_rank)))
				{
					cerr << "ERROR (2 ranks)";
					return 0;
				}
				res = res - 2 * second_rank;
			}


		}
		third_rank = second_rank;
		second_rank = first_rank;


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
}