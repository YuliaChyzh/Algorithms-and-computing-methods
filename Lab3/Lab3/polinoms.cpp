#include "interpol.h"
#include <iostream>
#include <stdio.h>

using namespace std;

float** makePolinom(int n) {
	float **Polinom = new  float*[n + 2];
	for (int i = 0; i < n + 2; i++)	{		//�������� ������� ������������ �������� ���������
		Polinom[i] = new float[n + 2];
		for (int j = 0; j < n + 2; j++)		//���������� ������� ������
			Polinom[i][j] = 0;
	}
	return Polinom;
}
/*
void deletePolinom(float** Polinom, int n) {
	for (int i = 0; i < n + 2; i++)	//�������� ������� ������������ �������� ���������
		delete[] Polinom[i];
	delete[] Polinom;
}

float* makePolinomRes(float** Polinom, int n) {
	float* PolinomRes = new float[n + 1];	//�������� ��������������� ��������-�������
	for (int i = 0; i <= n; i++) 	{
		float sum = 0;						//�������������� ����������
		for (int j = 0; j <= n; j++)
			sum += Polinom[j][i];			//���������� ����� ������������ ���������� i-��� ������� (����� �� i-���� ������� �������) 
		PolinomRes[i] = sum;
	}
	return PolinomRes;
}

void deletePolinomRes(float* PolinomRes) {
	delete[] PolinomRes;	//�������� ������ ������������ ��������������� ��������
}
*/
