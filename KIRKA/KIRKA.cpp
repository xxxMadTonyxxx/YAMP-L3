#include <iostream>
#include <math.h>
#include <iomanip>
#include <time.h>
#include <stdlib.h>
#include <locale.h>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
    const int N = 10;
	int Array[N], i, k;
	cout << "Введите 0 если хотите сами ввести значения массива " << endl << "Введите 1 если хотите, чтобы это сделал рандомайзер" << endl;
	cin >> k;
	if (k == 0)
	{
		cout << "Введите " << N << " чисел через пробел" << endl;
		for ( i = 0; i < N; i++)
			cin >> Array[i];
		cout << "Массив" << endl;
		for ( i = 0; i < N; i++)
			cout << Array[i] << " ";
		cout << endl;
		if (i > 2) {
			cout << "Все элементы массива, кроме первого и последнего" << endl;
			for (i = 1; i < N - 1; i++)
				cout << Array[i] << " ";
			cout << endl;
		}
		else
			cout << "Нет элементов, уоторые удовлетворяют условию" << endl << endl;
		return 0;
	}
	else if (k == 1)
	{
		int l;
		int a[N]{};
		cout << "Введите свой номер в списке группы" << endl;
		cin >> l;
		srand(time(NULL));
		cout << "Массив рандомных чисел:" << endl;
		for (i = 0; i < N; i++) {
			a[i] = 1 + rand() % 10 * l;
			cout << a[i] << " ";
		}
		if (i > 2) {
			cout << "Все элементы массива, кроме первого и последнего" << endl;
			for (i = 1; i < N - 1; i++)
				cout << a[i] << " ";
			cout << endl;
		}
		else
			cout << "Нет элементов, уоторые удовлетворяют условию" << endl << endl;
		
	}
	else
		cout << "Введены неправильные значения";
	return 0;
}







