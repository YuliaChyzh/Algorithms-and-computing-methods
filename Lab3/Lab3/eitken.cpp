#include "interpol.h"
#include <iostream>

using namespace std;

float* eitken(int n, coord *coords) {
	float* PolinomRes;
	if (n) 	//Проверка на количество точек
		PolinomRes = P(0, n, coords);	//Рекурсивное вычисление коефициентов результирующего полинома если точек >1
	else {
		PolinomRes = new float[1];		//Вывод единственного коефициента, если одна точка
		PolinomRes[0] = coords[0].y;
	}
	return PolinomRes;
}

float* P(int i, int j, coord* coords) {
	int n = j - i;
	float k12 = 1 / (float)(coords[j].x - coords[i].x);
	float* Pij = new float[n + 1];	//Текущий поином Pi,j(x)
	for (int k = 0; k <= n; k++)
		Pij[k] = 0;
	if (j - i == 1) {		//Если степень текущего полинома = 1 (y=kx+b)  (Так как Pi(x)=yi и Pj(x)=yj, то...)
		Pij[0] += coords[j].y*k12 - coords[i].y*k12;
		Pij[1] += coords[j].y*(-coords[i].x)*k12 - coords[i].y*(-coords[j].x)*k12;
	}
	else {				//Если степень текущего полинома > 1 (y=kx^2+bx+c или больше...)
		float* Pi1j = P(i + 1, j, coords);	//Полином Pi+1,j(x)
		float* Pij1 = P(i, j - 1, coords);	//Полином Pi,j-1(x)
		for (int k = 0; k < n; k++) {			//Заполнение текущего полинома Pij(x) за счёт полиномов Pi+1,j(x) и Pi,j-1(x)
			Pij[k] += Pi1j[k] * k12 - Pij1[k] * k12;
			Pij[k + 1] += Pi1j[k] * (-coords[i].x)*k12 - Pij1[k] * (-coords[j].x)*k12;
		}
		delete[] Pi1j;
		delete[] Pij1;
	}
	return Pij;		//Возвращяем текущий полином Pi,j(x)
}

float makePolinomGraphic(float x, float* PolinomRes, int n) {
	float y = 0;
	float step = 0;
	for (int i = 0; i <= n; i++) {	//Округление значений коефициентов в случае попадания их в ноль или его ближайший окол
		if (PolinomRes[i] > 0.000001 || PolinomRes[i] < -0.000001)
			step = pow(x, n - i)*PolinomRes[i];
		else
			step = 0;
		y += step;
	}
	return y;
}
