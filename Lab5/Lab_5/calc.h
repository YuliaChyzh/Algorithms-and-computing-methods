// ��������� ��������� �����������

#include <math.h>
#include <conio.h>
#include <sstream>
#include <msclr/marshal.h>

#pragma once

extern unsigned int kolIter;		// ������� �������� ������
extern float EPS;					// ������� ���������� 
extern int Dec;						// ������� ������ ����������
extern float w;						// �������� ����������

struct detSLAR {
	float det=1;		// �������� ����������
	bool kol=true;		// ������� ����'����: false - ���� , true - �����  
};

float** inpMatrixInFile(int, const char *);	// ���������� ���������� �������� ������ ������� � �����	
float* calc_SLAR(float **, int);			// ���������� ��������� ������ ������� ��������� 

detSLAR detMatrix(float **, int);			// ���������� ���������� ���������� �������
float** GausStraight(float **, int);		// ���������� ���������� ������� �� ���������� ������� ������� ����� (������ ���)
float** Inverse(float **, int);				// ���������� ��������� ������ �������-�����
void clear(float **, int);					// ���������� ������� ������� ���'��
float** clone(float **, int);				// ���������� ��������� ��ﳿ �������
float** newMatrix(int);						// ���������� ��������� ���� �������
void swap(float **, int, int, int);			// ���������� ����� ������ ���� ����� �������
float** oneMatrix(int);						// ���������� ��������� �������� ������� ��������� ������
float** sumMatrix(float **, float **, int);	// ���������� ���������� ���� ���� ���������� �������
float** A_scalar_B(float **, float **, int);// ���������� ������� ���� �������
float** A_scalar_Num(float **, int, float);	// ���������� ������� ������� �� �����
float **VT(float **, int);					// ���������� ���������� � ������� � ��������������� ������� 
float **NT(float **, int);					// ���������� ���������� � ������� � �������������� ������� 
float **DM(float **, int);					// ���������� ���������� � ������� � ���������� ������� 
float *A_mult_V(float **, float *, int);	// ���������� ������� ������� �� ������ 
float modulV(float *, int);					// ���������� ���������� ������ ������� (����� �� ���� �������� ��������) 
float norm1(float **, int);					// ���������� ���������� ����� ����� ������� 
float norm2(float **, int);					// ���������� ���������� ����� ����� �������
float norm3(float **, int);					// ���������� ���������� ������ ����� (���������) ������� 
float **normingMatrix(float **, int, float);	// ���������� ���������� ������ ������� 
float **normingMatrix(float **, int);
bool check�onvergence(float **, int);		// ���������� �������� ������������ ������� �� ���������� 
float* RoundRez(float *, int, int);			// ���������� ���������� �������� ������� �� ��������� ������� 

float* calc_SLAR2(float **, int);			// ���������� ��������� ������ ������� ���������
float* calc_SLAR3(float **, int);			// ���������� ��������� ������ ������� ���������