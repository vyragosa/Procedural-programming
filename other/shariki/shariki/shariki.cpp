#include <iostream>
using namespace std;

void swap(int* arr, int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int perestanovka(int* arr, int n, int m)
{
    int sum = 0;
    if (m == n)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == i + 1)
            {
                return 1;
            }
        }
    }
    else
    {
        for (int i = m; i < n; i++) {
            swap(arr, i, m);
            sum += perestanovka(arr, n, m + 1);
            swap(arr, i, m);
        }
    }
    return sum;
}

int main()
{
    int n;
    cout << "N: ";
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }
    cout << "Result: " << perestanovka(arr, n, 0);
}