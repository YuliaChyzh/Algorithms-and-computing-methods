#pragma once
#include "math.h"

struct coord {	// Описание структуры координат x и y
	float x;
	float y;
	float y_Inter;
};
struct analiz {
	float x;
	float y_move;
};

//polinoms.cpp
//float** makePolinom(int);				// Создание матрицы базисных полиномов
//void deletePolinom(float**, int);		// Удаление матрицы базисных полиномов
//float* makePolinomRes(float**, int);	// Создание масива коефициентов результирующего полинома
//void deletePolinomRes(float*);		// Удаление масива коефициентов результирующего полинома

//eitken.cpp
float* eitken(int, coord*);	//Интерполяция методом 
float* P(int, int, coord*);	//Рекурсивное нахождение промежуточных полиномов
float makePolinomGraphic(float, float*, int);	// Вычисление значений интерполированой функции в заданых точках

