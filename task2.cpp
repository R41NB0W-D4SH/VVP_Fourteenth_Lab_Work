#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int i, n, d;
	cout << "Введите размерность массива: ";
	cin >> n;

	int *arr = new int[n];

	for (i = 0; i < n; i++) 
	{
		cout << "Введите элемент массива: ";
		cin >> arr[i];
	}

	d = arr[1] - arr[0];

	for (i = 2; i < n; i++) 
	{
		if (arr[i] - arr[i - 1] != d) 
		{
			d = 0;
			break;
		}
	}

	cout << "Разность арифметической прогрессии: " << d;

	system("pause");
	return 0;
}
