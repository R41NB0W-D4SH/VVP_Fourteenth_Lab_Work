#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	int i, n, k, l, sum;
	cout << "Введите размерность массива: ";
	cin >> n;
	sum = 0;

	int *arr = new int[n];

	for (i = 0; i < n; i++)
	{
		cout << "Введите элеменет массива: ";
		cin >> arr[i];
	}

	cout << "Введите K и L: ";
	cin >> k >> l;

	if (1 <= k && k <= l && l <= n)
	{ 
		for (i = k - 1; i < l; i++)
		{
			sum = sum + arr[i];
		}

		sum = sum / (l - k + 1);

		cout << "Среднее арифметическое чисел равно " << sum << endl;
	}
	else
	{
		cout <<"Вы не следуете условию: 1 <= K <= L <= N. Введите переменные еще раз, следуя условиям." << endl;
	}

	system("pause");
	return 0;
}
