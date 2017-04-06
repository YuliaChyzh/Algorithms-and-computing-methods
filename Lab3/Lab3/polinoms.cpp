#include "interpol.h"
#include <iostream>
#include <stdio.h>

using namespace std;

float** makePolinom(int n) {
	float **Polinom = new  float*[n + 2];
	for (int i = 0; i < n + 2; i++)	{		//Создание матрицы коефициентов базисных полиномов
		Polinom[i] = new float[n + 2];
		for (int j = 0; j < n + 2; j++)		//Заполнение матрицы нулями
			Polinom[i][j] = 0;
	}
	return Polinom;
}
/*
void deletePolinom(float** Polinom, int n) {
	for (int i = 0; i < n + 2; i++)	//Удаление матрицы коефициентов базисных полиномов
		delete[] Polinom[i];
	delete[] Polinom;
}

float* makePolinomRes(float** Polinom, int n) {
	float* PolinomRes = new float[n + 1];	//Создание результирующего полинома-массива
	for (int i = 0; i <= n; i++) 	{
		float sum = 0;						//Вспомагателная переменная
		for (int j = 0; j <= n; j++)
			sum += Polinom[j][i];			//Нахождение суммы коефициентов переменной i-той степени (сумма по i-тому столбцу матрицы) 
		PolinomRes[i] = sum;
	}
	return PolinomRes;
}

void deletePolinomRes(float* PolinomRes) {
	delete[] PolinomRes;	//Удаление масива коефициентов результирующего полинома
}
*/
