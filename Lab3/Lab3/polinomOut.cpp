#include "interpol.h"
#include <iostream>
#include <stdio.h>

using namespace std;

void writeFile(char* fileName, float* PolinomRes, int n)
{
	FILE* f;
	if (!fopen_s(&f, fileName, "wt"))		//�������� ������ ����� ��� ������
	{
		fprintf_s(f, "n=%d\n", n);			//����� ������� ��������������� ��������
		for (int i = 0; i <= n; i++)
		{
			fprintf_s(f, "%f\n", PolinomRes[i]);	//����� ������������ ��������������� ��������
		}
	}
	else
	{
		cout << "ERROR1: fopen_s " << endl;
	}
	fclose(f);
}

float makePolinomGraphic(float x, float* PolinomRes, int n)
{
	float y = 0;
	float step = 0;
	for (int i = 0; i <= n; i++)
	{	//���������� �������� ������������ � ������ ��������� �� � ���� ��� ��� ��������� ����
		if (PolinomRes[i] > /*0.001*/0.000001 || PolinomRes[i] < /*-0.001*/-0.000001)
			step = pow(x, n - i)*PolinomRes[i];
		else
			step = 0;
		y += step;
	}
	return y;
}
