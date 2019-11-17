#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int n, i, j;
	cout << "Введите размерность массива: ";
	cin >> n;

	int *arr = new int[n];

	for (i = 0; i < n; i++)
	{
		cout << "Введите элемент массива: ";
		cin >> arr[i];
	}

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{ 
			if (arr[i] == arr[j])
				break;
		}
		if (arr[i] = arr[j])
		{
			break;
		}
	}

	cout << "Одинаковые элементы массива: " << i << ' ' << j;

	system("pause");
	return 0;
}
