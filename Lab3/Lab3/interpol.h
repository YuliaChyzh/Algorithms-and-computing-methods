#pragma once
#include "math.h"

struct coord {	// �������� ��������� ��������� x � y
	float x;
	float y;
	float y_Inter;
};
struct analiz {
	float x;
	float y_move;
};

//polinoms.cpp
//float** makePolinom(int);				// �������� ������� �������� ���������
//void deletePolinom(float**, int);		// �������� ������� �������� ���������
//float* makePolinomRes(float**, int);	// �������� ������ ������������ ��������������� ��������
//void deletePolinomRes(float*);		// �������� ������ ������������ ��������������� ��������

//eitken.cpp
float* eitken(int, coord*);	//������������ ������� 
float* P(int, int, coord*);	//����������� ���������� ������������� ���������
float makePolinomGraphic(float, float*, int);	// ���������� �������� ���������������� ������� � ������� ������

