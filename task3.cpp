#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int i, n, min;
	cout << "Введите размерность массива: ";
	cin >> n;

	int *arr = new int[n];

	for (i = 0; i < n; i++)
	{
		cout << "Введите элемент массива: ";
		cin >> arr[i];
	}

	min = arr[0];

	for (i = 2; i < n; i = i + 2)
	{
		min = arr[i] < min ? arr[i] : min;
	}

	cout << "Минимальный элемент массива: " << min;

	system("pause");
	return 0;
}
