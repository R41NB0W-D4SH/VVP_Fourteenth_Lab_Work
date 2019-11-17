#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int n, max;
	cout << "Введите размерность массива: ";
	cin >> n;
	max = -1;

	int *arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		cout << "Введите элемент массива: ";
		cin >> arr[i];
	}

	for (int i = 1; i < n; i++)
	{
		if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
		{ 
			max = i;
		}
	}

	if (max == -1)
	{ 
		if (arr[0] > arr[1])
		{
		max = 0;
		}
	}
		else if (arr[n - 1] > arr[n - 2]) 
		{ 
		max = n - 1;
		}
		else if (n == 1) 
		{
		max = 0;
		}

		cout << "Последний локальный минимум массива: " << max << endl;

		system("pause");
		return 0;
}
