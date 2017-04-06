#include "interpol.h"
#include <iostream>

using namespace std;

float* lagrange(int n, coord *coords)
{
	float**Polinom = makePolinom(n);	//Выделение памяти под матрицу полиномов
	for (int i = 0; i <= n; i++)
	{
		l(i, n, coords, Polinom);		//Нахождение базисных полиномов
		for (int j = 0; j <= n; j++)
			Polinom[i][j] *= coords[i].y;
	}
	float* PolinomRes = makePolinomRes(Polinom, n);	//Создание результирующего полинома
	deletePolinom(Polinom, n);
	return PolinomRes;
}

void l(int i, int n, coord coords[], float **Polinom)	//Находим i-тую часть полинома Лагранжа 
{
	float koef = 1;
	float* Arr = new float[n];
	for (int j = 0; j <= n; j++)
	{
		//Создание временного массива n нужных координат

		koef = 1;
		int zapis = 0;
		for (int ii = 0; ii <= n; ii++)
		{
			if (ii == i)
				continue;
			Arr[zapis] = coords[ii].x;
			zapis++;
			koef /= (coords[i].x - coords[ii].x);	//Вычисляем коефициент koef=1/( (xi-x0)*...*(xi-xn) ) при i<>j
		}

		Polinom[i][j] = (s(n, j, Arr)*koef);		//Вычисление "соединения" (комбинаторика)
	}

	delete[]Arr;
}

float s(int n, int k, float mass[])
{
	if (k == 0)		//При k==0 функция s возвращяет 1
		return 1;

	int i, p;
	float sum = 0, mnoj = 1;	//Переменные суммы и произведения
	int* A = new int[k];		//Массив индексов

	for (i = 0; i<k; i++)		//Инициализация массива индексов
		A[i] = i;

	while (1)
	{
		mnoj = 1;
		for (i = 0; i < k; i++)	//Произведение элементов arr
		{
			mnoj *= -mass[A[i]];
		}
		sum += mnoj;

		if (A[k - 1] < n - 1)
			A[k - 1]++;
		else
		{
			for (p = k - 1; p > 0; p--)
			if (A[p] - A[p - 1] > 1)
				break;

			if (p == 0)
				break;
			A[p - 1] ++;
			for (i = p; i<k; i++)
				A[i] = A[i - 1] + 1;
		}
	}
	delete[] A;
	return sum;
}
