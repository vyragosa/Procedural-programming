#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

void swap(int* a, int* b) { // функция перестановки элементов
	int t = *a;
	*a = *b;
	*b = t;
}
int partition(int array[], int low, int high) { // функция переупорядочения массива (нахождения точки раздела) 

	int pivot = array[high]; // крайний правый элемент как опорный

	int i = (low - 1); //указатель большего элемента 

	for (int j = low; j < high; j++) { //цикл сравнений элементов с опорным элементом 
		if (array[j] <= pivot) {
			// если найден элемент меньше опорного, меняем его местами c большим элементом, на который указывает i 
			i++;
			swap(&array[i], &array[j]); //вызов функции перестановки элементов
		}
	}

	swap(&array[i + 1], &array[high]); // меняем местами точку опоры с большим элементом в i 

	return (i + 1); // возвращаем точку раздела
}

void quickSort(int array[], int low, int high) { //функция быстрой сортировки
	if (low < high) {

		int pi = partition(array, low, high); // находим такой опорный элемент, что меньше него находятся слева, большие справа 
		quickSort(array, low, pi - 1); // рекурсивный вызов слева от опорного элемента
		quickSort(array, pi + 1, high); // рекурсивный вызов справа от опорного элемента
	}
}

int main()
{
	SetConsoleCtrlHandler(NULL, TRUE);
	srand(time(NULL)); //рандом по времени
	int data[32];
	int a[8][8];
	int l = 0;
	int k = -1;
	string str;

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			a[i][j] = rand() % 100 + 1; //заполнение массива рандомными значениями от 1 до 100
		}
	}
	while (k == -1) //проверка правильности вводимого значения
	{
		cout << "Enter color (white or black): _____\b\b\b\b\b";
		cin >> str; //ввод цвета (только white or black)
		if (str == "white")
		{
			k = 0;
		}
		else if (str == "black")
		{
			k = 1;
		}
		else
		{
			cout << "Not a color or wrong color.\n";
		}
	}
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j += 2)
		{
			data[l] = a[i][j + (i + k) % 2]; //в одномерный массив записываются элементы матрицы, стоящие на клетках заданного цвета. Белая клетка стоит в верхнем левом углу.
			l += 1;							 //На каждом новой стоке первая клетка меняет цвет. 
		}									 //k позволяет записывать первый или второй элемент матрицы в массив в зависимости от цвета.
	}
	cout << "sorted array: ";
	quickSort(data, 0, 32 - 1); //вызывается функция сортировки
	for (int i = 0; i < 32; i++)
	{
		cout << data[i] << ' '; //вывод массива
	}
	return 0;
}
