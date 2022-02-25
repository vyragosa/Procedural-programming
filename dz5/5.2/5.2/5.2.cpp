#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int* a = new int[n + 1];
    for (int i = 0; i < n + 1; i++)
    {
        a[i] = i;
    }
    for (int i = 2; i < n + 1; i++)
    {
        if (a[i] != 0)
        {
            cout << a[i] << endl;
            for (int j = i * i; j < n + 1; j += i)
            {
                a[j] = 0;
            }
        }
    }
}