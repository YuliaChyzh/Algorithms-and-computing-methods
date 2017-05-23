// Бібліотека підпрограм користувача

#include <math.h>
#include <conio.h>
#include <sstream>
#include <msclr/marshal.h>

#pragma once

extern unsigned int kolIter;		// кількість ітерацій методу
extern float EPS;					// точність обчислення 
extern int Dec;						// точність виводу результату
extern float w;						// параметр релаксації

struct detSLAR {
	float det=1;		// значення визначника
	bool kol=true;		// кількість розв'язків: false - немає , true - безліч  
};

float** inpMatrixInFile(int, const char *);	// підпрограма зчитування елементів вхідної матриці з файлу	
float* calc_SLAR(float **, int);			// підпрограма реалізації метода верхньої релксації 

detSLAR detMatrix(float **, int);			// підпрограма обчислення визначника матриці
float** GausStraight(float **, int);		// підпрограма приведення матриці до трикутного вигляду методом Гауса (прямий хід)
float** Inverse(float **, int);				// підпрограма реалізації метода Жардана-Гауса
void clear(float **, int);					// підпрограма очистки виділеної пам'яті
float** clone(float **, int);				// підпрограма створення копії матриці
float** newMatrix(int);						// підпрограма створення нової матриці
void swap(float **, int, int, int);			// підпрограма обміну місцями двох рядків матриці
float** oneMatrix(int);						// підпрограма генерації одиничної матриці потрібного розміру
float** sumMatrix(float **, float **, int);	// підпрограма обчислення суми двох квадратних матриць
float** A_scalar_B(float **, float **, int);// підпрограма добутку двох матриць
float** A_scalar_Num(float **, int, float);	// підпрограма добутку матриці на число
float **VT(float **, int);					// підпрограма формування з матриці А верхньотрикутної матриці 
float **NT(float **, int);					// підпрограма формування з матриці А нижньотрикутної матриці 
float **DM(float **, int);					// підпрограма формування з матриці А діагональної матриці 
float *A_mult_V(float **, float *, int);	// підпрограма добутку матриці на вектор 
float modulV(float *, int);					// підпрограма обчислення модуля вектора (корінь із суми квадратів елементів) 
float norm1(float **, int);					// підпрограма обчислення першої норми матриці 
float norm2(float **, int);					// підпрограма обчислення другої норми матриці
float norm3(float **, int);					// підпрограма обчислення третьї норми (Фробеніуса) матриці 
float **normingMatrix(float **, int, float);	// підпрограма нормування вхідної матриці 
float **normingMatrix(float **, int);
bool checkСonvergence(float **, int);		// підпрограма перевінки ітераційного процесу на зходиміться 
float* RoundRez(float *, int, int);			// підпрограма округлення елементів матриці до вказаного розряду 

float* calc_SLAR2(float **, int);			// підпрограма реалізації метода верхньої релксації
float* calc_SLAR3(float **, int);			// підпрограма реалізації метода верхньої релксації