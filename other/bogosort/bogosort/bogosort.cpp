#include <iostream>
using namespace std;
int is_sorted(int* arr, int n)
{
    while (n >= 1)
    {
        n--;
        if (arr[n] < arr[n - 1])
        {
            return 0;
        }
    }
    return 1;
}
void shuffle(int* arr, int n)
{
    int temp, r;
    for (int i = 0; i < n; i++)
    {
        temp = arr[i];
        r = rand() % n;
        arr[i] = arr[r];
        arr[r] = temp;
    }
}
void bogosort(int* arr, int n)
{
    while (!is_sorted(arr, n))
    {
        shuffle(arr, n);
    }
}
int main()
{
    int arr[] = { 7, 6, 5, 4, 3, 2, 1 };
    int i;
    bogosort(arr, 7);
    for (i = 0; i < 7; i++)
    {
        cout << arr[i] << "\t";
    }
}
