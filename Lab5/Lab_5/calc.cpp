// Файл реалізації підпрограм користувача

#include "calc.h"

using namespace std;

unsigned int kolIter;		// кількість ітерацій методу
float EPS;					// точність обчислення
int Dec;					// точність виводу результату
float w;					// параметр релаксації

//=============== підпрограма зчитування елементів вхідної матриці з файлу ==============
float** inpMatrixInFile(int n, const char *str) {// розмірність матриці, покажчик на масив символів
	stringstream streamRead(str);		// конвертувати char * у стрім (потік) (щоб потім з нього читати числа)
	int kolRow = 0, kolCol = 0;			//	змінні підрахунку прочитаних рядків і колонок
	float **matrix = new float*[n];	// створення нової матриці
	bool err = false;		// прапорець помилки (помилка відсутня)
	for (int row = 0; row < n && !err; row++) {	// цикл по N рядках і поки немає помилки 
		matrix[row] = new float[n+1];			// створення нового рядка матриці
		kolCol = 0;			// обнулення кількості колонок
		for (int col = 0; col < n+1 && !err; col++) {		// цикл по N колонках і поки немає помилки
			float el = 0;	// ініціалізація змінної (прочитане значення елемента матриці) 
			streamRead >> el;		// прочитати із потоку значення елемента 
			err = (streamRead) ? false : true;	// якщо вже кінець рядка, а ще не всі елементи прочитано (по кількості в рядку матриці), підняти прапорець  
			if (streamRead) {	// якщо покажчик у стрімі не вказує на NULL, то	
				matrix[row][col] = el;	// записати в поточний елемент матриці прочитаний із потоку елемент
				kolCol++;		// збільшити кількість прочитаних у рядку елементів на 1
			}
			else err = true;	// інакше підняти прапорець
		}
		err = !(kolCol == n+1);	// якщо кількість прочитаних у рядку елементів !=N, підняти прапорець
		kolRow++;				// збільшити кількість прочитаних рядків на 1
	}
	if (!err && kolRow == n)	// якщо не виникало помилки і кількість прочитаних рядків ==N, то
		return matrix;		// повернути адресу на динамічну матрицю із прочитаними елементами (прочитано вдало)
	else
		return NULL;		// повернути NULL (помилка читання даних)
}
// ============= підпрограма реалізації метода верхньої релксації ============================================
float* calc_SLAR(float **matrix, int n) {
	//Решение СЛАУ Au=f методом релаксации; w - параметр который свойствелен для метода релаксации и применянться для быстроты сходимости
	// A=L+D+U, де: L- нижнєтрикутна; U- верхнєтрикутна; D - діагональна;      
	//
	//u[k+1]=-(wL+D)^(-1)*(wU+(t-1)D)*u[k]+(wL+D)^(-1)*f
	//        (---Inv---)				   (---Imv---) 				
	//		 (-----Q1---)*(---Q2----)	
	//		 (-----------Q----------)  ^   (-------G----)				
	
	float **A = normingMatrix(matrix, n, (1 / norm3(matrix, n)));		// нормування матриці A за нормою Фробеніуса
	A = normingMatrix(A, n);	// нормалізувати матрицю (щоб A[i][i]==1)

	float *f = new float[n];
	for (int i = 0; i < n; f[i] = A[i][n], i++);  		// f[i] - вектор вільних елементів (в ньому буде розв'язок)
		
	float **U = VT(A, n);		// створити з А верхньотрикутну матрицю U
	float **L = NT(A, n);		// створити з А нижньотрикутну матрицю L
	float **D = DM(A, n);		// створити з А діагональну матрицю D

	float **Inv = Inverse(sumMatrix(D, A_scalar_Num(L, n, w), n), n);		//Q1=(D+w*L)^(-1)
	float *G = A_mult_V(A_scalar_Num(Inv, n, w), f, n);						//G=w*((w*L+D)^(-1))*f
	
	float **Q1 = A_scalar_Num(Inv, n, -1);											//Q1=-1*((D+w*L)^(-1))
	float **Q2 = sumMatrix(A_scalar_Num(D, n, w - 1), A_scalar_Num(U, n, w), n);		//Q2=((w-1)*D + w*U)
	float **Q = A_scalar_B(Q1, Q2, n);												//Q=Q1*Q2=(-(D+w*L)^(-1)) * ((w-1)*D + w*U)

	kolIter = 0;
	float norma;
	do {
		kolIter++;	// к-сть ітерацій ++
		float *u = A_mult_V(Q, f, n);		//u=Q*f
		float *xn = new float[n];
		float *v = new float[n];
		for (int i = 0; i < n; xn[i] = u[i] + G[i], i++);			//xn=Q*f+G
		for (int i = 0; i < n; v[i] = fabs(xn[i] - f[i]), i++);		//v=|xn-f|
		for (int i = 0; i < n; f[i] = xn[i], i++);					//f=xn
		norma = modulV(v, n);	// обчислити похибку (модуль вектора V)
	} while (norma >= EPS);		// поки похибка більше заданої точності

	clear(A, n);	// очистить пам'ять від матриць та векторів
	clear(U, n);
	clear(L, n);
	clear(D, n);
	clear(Q1, n);
	clear(Q2, n);
	clear(Inv, n);
	clear(Q, n);
	delete[] G;		
	return f;		// повернути адресу вектора розв'язків
}
// ============= підпрограма реалізації метода (2) верхньої релксації ============================================
float* calc_SLAR2(float **matrix, int n) {
	float **A = normingMatrix(matrix, n);	// нормалізувати матрицю (щоб A[i][i]==1)
	float *xn = new float[n];
	for (int i = 0; i < n; xn[i] = A[i][n], i++); 	// ініціалізація початкового наближення
	float norma;
	float *Rez = new float[n];	// вектор розв'язків 
	kolIter = 0;
	do {
		kolIter++;		// к-сть ітерацій ++
		for (int i = 0; i<n; i++) {
			Rez[i] = A[i][n];				// Rez = вектору вільних елементів 
			for (int j = 0; j<n; j++) {
				if (i != j)
					Rez[i] = Rez[i] - A[i][j] * Rez[j];
			}
			Rez[i] = w * Rez[i] + (1 - w) * xn[i];
		}
		float *v = new float[n];
		for (int i = 0; i < n; v[i] = fabs(xn[i] - Rez[i]), i++);	// v=|xn-Rez|
		for (int i = 0; i < n; xn[i] = Rez[i], i++);				// xn=Rez
		norma = modulV(v, n);	// обчислити похибку (модуль вектора V)
	} while (norma >= EPS);		// поки похибка більше заданої точності
	clear(A, n);	// очистить пам'ять 
	return Rez;		// повернути вектор розв'язку
}
// ============= підпрограма реалізації метода верхньої релксації ============================================
float* calc_SLAR3(float **A, int n) {
	float *C = new float[n];		// вектор вільних членів
	float *Y = new float[n];		// вектор значень попередньої ітерації
	float *X = new float[n];		// вектор результатів (остання ітерація)

	float **B = newMatrix(n);		// проміжна матриця
	for (int i = 0; i <n; i++) {
		for (int j = 0; j <n; j++) {
			if (i != j) B[i][j] = (-1) * A[i][j] / A[i][i];
			else {
				B[i][j] = 0;
				C[i] = A[i][n] / A[i][i];
			}
		}
	}
	float *sq_z = new float[n];
	float *sq_y = new float[n];
	for (int i = 0; i <n; sq_z[i] = rand(), i++);
	for (int i = 0; i <n; sq_y[i] = C[i], i++);
	for (int i = 0; i <n; X[i] = 0, i++);
	float vsp = C[0];
	for (int j = 0; j <n; vsp += sq_z[j] * B[0][j], j++);
	sq_z[0] = vsp;
	for (int i = 0; i <n; i++) {
		for (int j = 0; j <n; vsp += B[i][j], j++);
		Y[i] = vsp;
		vsp = 0;
	}
	vsp = Y[0];
	for (int i = 1; i <n; i++) {
		vsp = (vsp < Y[i]) ? Y[i] : vsp;
		Y[i] = 0;
	}
	float norma;
	if (vsp < 1) {
		kolIter = 0;
		do {
			for (int i = 0; i <n; Y[i] = X[i], i++);	// зберегти попереднє наближення
			for (int i = 0; i <n; i++) {
				vsp = C[i];
				float alp = 0;
				for (int j = 0; j <n; j++) {
					vsp += sq_z[j] * B[i][j];
					alp += B[i][j] * sq_y[i];
				}
				sq_z[i] = vsp;
				sq_y[i] = alp + C[i];
				vsp = 0;
				X[i] = w * sq_z[i] + (1 - w) * sq_y[i];	// отримати наступне наближення
			}
			float *v = new float[n];
			for (int i = 0; i < n; v[i] = fabs(X[i] - Y[i]), i++);		// v=|X-Y|
			norma = modulV(v, n);	// обчислити похибку (модуль вектора V)
			kolIter++;
//			if (kolIter>10000) break;
		} while (norma >= EPS  && kolIter<10000);		// поки похибка більше заданої точності і к-сть ітерацій <1000
	}

	clear(B, n);	// очистить пам'ять від матриць та векторів
	delete[] C;
	delete[] Y;
	delete[] sq_z;
	delete[] sq_y;

	return X;
}
//=============== підпрограма приведення матриці до трикутного вигляду методом Гауса (прямий хід) ================
float** GausStraight(float **matrix, int n) { // адреса вхідної матриці,  розмірність матриці
	float **B = clone(matrix, n);		// копія матриці
	for (int step = 0; step < n - 1; step++)
	for (int row = step + 1; row < n; row++) {
		if (!B[step][step]) {	// якщо елемент на головній діагоналі == 0, то шукати серед рядків, що нижче, той, у якого елемент в цій колонці <> 0 
			bool flag = false;	// прапорець пошуку
			for (int row1 = step; row1 < n && !flag; row1++) {	// цикл по всіх рядках, що нижче даного
				if (B[row1][step]) {	// якщо знайшли ненульовий елемент, 
					swap(B, n, step, row1);	// то поміняти рядки місцями
					flag = true;		// підняти прапорець
				}
			}
			if (!flag) return B;	// якщо в кожному з рядків, що нижче даного, немає ненульового елементу в цій колонці, повернути матрицю (хоть і не приведену до трикутної - визначник у неї буде ==0)
		}
		float coeff = -B[row][step] / B[step][step];	// коефіцієнт 
		for (int col = step; col < n; B[row][col] += B[step][col] * coeff, col++);		// сума елементів
	}
	return B;	// повернути адресу на матрицю
}
//=============== підпрограма реалізації метода Жардана-Гауса  ================
float** Inverse(float **matrix, int n) { // адреса вхідної матриці,  розмірність матриці
	float **B = clone(matrix, n);	// копія вхідної матриці
	float **I = oneMatrix(n);		// ініциалізація одиничної матриці однакового розміру з вхідною матрицею
	float coeff = 1.0;
	for (int step = 0; step < n; step++) {	// цикл по всіх колонках вхідної матриці 
		if (!B[step][step]) {		// якщо ключовий елемент == 0
			bool flag = false;		// прапор обміну рядків
			for (int row = step; row < n && !flag; row++) {		// цикл по всіх рядках, що нижче даного або до першого обміну 
				if (B[row][step]) {	// якщо цей елемент !=0
					swap(B, n, step, row);	// обмін місцями рядків вхідної матриці 
					swap(I, n, step, row);	// обмін місцями рядків оберненої матриці 
					flag = true;			// підняти прапорець
				}
			}
		}
		coeff = B[step][step];		// отримати ключовий елемент (елемент з головної діагоналі ключової колонки вхідної матриці) 
		if (coeff != 1.0) {
			for (int col = step; col < n; B[step][col] /= coeff, col++);	// розділити всі елементи рядка вхідної матриці, в якому розміщений ключовий елемент на ключовий елемент (отримаємо 1 на діагоналі)
			for (int col = 0; col < n; I[step][col] /= coeff, col++);		// розділити всі елементи рядка одиничної матриці на той самий ключовий елемент
		}
		for (int row = 0; row < n; row++) {	// цикл по всіх рядках вхідної і одиничної матриць 
			if (row != step) {
				coeff = -B[row][step];		// коефіцієнт - протилежне значення елемента в і-му рядку ключової колонки 
				for (int col1 = step; col1 < n; B[row][col1] += B[step][col1] * coeff, col1++);		// сума решти елементів ключового рядка вхідної матриці, помноженого на коефіціент, та елементів і-го рядка (отримаємо 0 у всіх рядках ключової колонки, крім головної діагоналі)
				for (int col1 = 0; col1 < n; I[row][col1] += I[step][col1] * coeff, col1++);		// сума всіх елементів ключового рядка одиничної матриці, помноженого на коефіціент, та елементів і-го рядка одиничної матриці
			}
		}
	}
	clear(B, n);
	return I;	// повернути адресу на обернену матрицю
}
//=============== підпрограма обміну місцями двох рядків матриці  ================
void swap(float **matrix, int n, int row_in, int row_to) { // адреса вхідної матриці,  розмірність, № рядка, № рядка
	for (int col = 0; col < n + 1; swap(matrix[row_in][col], matrix[row_to][col]), col++);
}
//=============== підпрограма очистки виділеної пам'яті ================
void clear(float **matrix, int n) { // адреса вхідної матриці,  розмірність матриці
	for (int i = 0; i < n; i++) delete[] matrix[i];	 // очистка пам'яті від рядків
	delete[] matrix;	// очистка пам'яті від змінної матриці
}
//=============== підпрограма створення нової матриці ================
float** newMatrix(int n) { // адреса вхідної матриці,  розмірність матриці
	float **newArr = new float*[n];		// створення нової матриці
	for (int row = 0; row < n; row++) {
		newArr[row] = new float[n];		// створення нового рядка матриці
		for (int col = 0; col < n; newArr[row][col] = 0, col++);	// ініціалізувати всі елементи в 0
	}
	return newArr;		// повернути адресу матриці
}
//=============== підпрограма створення копії матриці ================
float** clone(float **matrix, int n) { // адреса вхідної матриці,  розмірність матриці
	float **newArr = new float*[n];		// створення нової матриці
	for (int row = 0; row < n; row++) {
		newArr[row] = new float[n + 1];		// створення нового рядка матриці
		for (int col = 0; col < n + 1; col++)
			newArr[row][col] = matrix[row][col];	// скопіювати всі елементи в нову матрицю
	}
	return newArr;		// повернути адресу на копію матриці
}
//=============== підпрограма формування з матриці А верхньотрикутної матриці ================
float **VT(float **a, int n) {
	float **result = newMatrix(n);
	for (int i = 0; i<n; i++)
		for (int j = 0; j<n; j++)
		if (i<j) result[i][j] = a[i][j];
	return result;
}
//=============== підпрограма формування з матриці А нижньотрикутної матриці ================
float **NT(float **a, int n) {
	float **result = newMatrix(n);
	for (int i = 0; i<n; i++)
		for (int j = 0; j<n; j++)
		if (i>j) result[i][j] = a[i][j]; 
	return result;
}
//=============== підпрограма формування з матриці А діагональної матриці ================
float **DM(float **a, int n) {
	float **result = newMatrix(n);
	for (int i = 0; i<n; i++)
		for (int j = 0; j<n; j++)
		if (i == j) result[i][j] = a[i][j];
	return result;
}
//=============== підпрограма добутку двох матриць ================
float** A_scalar_B(float **A, float **B, int n) { 
	float **result = newMatrix(n);
	for (int row = 0; row < n; row++) 		// скалярний добуток двох матриць
	for (int col = 0; col < n; col++) {
		for (int j = 0; j < n; result[row][col] += A[row][j] * B[j][col], j++);	// перемножити дві матриці, результат помістити в result  
	}
	return result;		// повернути адресу на результат множення
}
//=============== підпрограма добутку матриці на число ================
float **A_scalar_Num(float **a, int n, float t) {
	float **result = newMatrix(n);
	for (int i = 0; i < n; i++)
	for (int j = 0; j < n; result[i][j] = t*a[i][j], j++);
	return result;
}
//=============== підпрограма добутку матриці на вектор ================
float *A_mult_V(float **a, float *b, int n) {
	float *result = new float[n];;
	for (int i = 0; i < n; i++) {
		result[i] = 0;
		for (int j = 0; j < n; result[i] += a[i][j] * b[j], j++);
	}
	return result;
}
//======= підпрограма обчислення модуля вектора (корінь із суми квадратів елементів) ================
float modulV(float *X, int n) {
	float s=0;
	for (int i = 0; i < n; s += (X[i] * X[i]), i++);
	return sqrt(s);
}
//=============== підпрограма обчислення суми двох квадратних матриць ================
float **sumMatrix(float **a, float **b, int n) {
	float **c = newMatrix(n);
	for (int i = 0; i<n; i++)
	for (int j = 0; j < n; c[i][j] = a[i][j] + b[i][j], j++);
	return c;
}
//=============== підпрограма обчислення визначника матриці ================
detSLAR detMatrix(float **matrix, int n) {	// адреса вхідної матриці,  розмірність матриці
	float **B = GausStraight(matrix, n);	// привести матрицю до трикутного вигляду методом Гауса
	detSLAR rezult;
	for (int i = 0; i < n; i++) {
		rezult.det *= B[i][i];				// визначник є добутком елементів головної діагоналі
		rezult.kol = rezult.kol && !(!B[i][i] && B[i][n]);		// якщо B[i][i]==0 а вільний член !=0, то записати false (немає розв'язків)
	}
	clear(B, n);			// очистить пам'ять від матриці В
	return rezult;			// повернути значення визначника
}

//=============== підпрограма генерації одиничної в матриці ==============
float** oneMatrix(int n) { 
	float **matrix = new float*[n];		// створення нової матриці
	for (int row = 0; row < n; row++) {
		matrix[row] = new float[n];		// створення нового рядка матриці
		for (int col = 0; col < n; matrix[row][col] = (row == col) ? 1 : 0, col++);	// запис "1" у головну діагональ
	}
	return matrix;		// повернути адресу одиничну матрицю
}
//=============== підпрограма обчислення першої норми матриці ================
float norm1(float **matrix, int n) { 
	float res = 0.0;		
	for (int row = 0; row < n; row++) {
		float sum = 0;
		for (int col = 0; col < n; sum += matrix[row][col], col++);		// сума елементів row-го рядка матриці
		res = (sum > res) ? sum : res;
	}
	return res;		// повернути значення першої норми
}
//=============== підпрограма обчислення другої норми матриці ================
float norm2(float **matrix, int n) { 
	float res = 0.0;
	for (int col = 0; col < n; col++) {
		float sum = 0;
		for (int row = 0; row < n; sum += matrix[row][col], row++);		// сума елементів col-го стовпця матриці
		res = (sum > res) ? sum : res;
	}
	return res;		// повернути значення другої норми
}
//=============== підпрограма обчислення третьї норми (Фробеніуса) матриці ================
float norm3(float **matrix, int n) { 
	float res = 0.0;		
	for (int row = 0; row < n; row++)
	for (int col = 0; col < n; res += pow(matrix[row][col], 2), col++);		// сума квадратів елементів матриці
	return sqrt(res);		// повернути значення норми Фробеніуса
}
//=============== підпрограма нормування вхідної матриці ================
float** normingMatrix(float **matrix, int n, float t) {
	float **B = clone(matrix, n);		// копія матриці
	for (int i = 0; i < n; i++)
	for (int j = 0; j < n + 1; B[i][j] = t * B[i][j], j++);
	return B;
}
//=============== підпрограма нормування вхідної матриці ================
float** normingMatrix(float **matrix, int n) {
	float **B = clone(matrix, n);		// копія матриці
	for (int i = 0; i < n; i++) 
		for (int j = 0; j < n + 1; B[i][j] /= matrix[i][i], j++);
	return B;
}
//=============== підпрограма перевінки ітераційного процесу на зходиміться ================
bool checkСonvergence(float **matrix, int n) {
	float **B = normingMatrix(matrix, n, (1 / norm3(matrix, n)));		// нормування вхідної матриці за нормою Фробеніуса
	return (norm1(B, n) >= 1 && norm2(B, n) >= 1 && norm3(B, n) >= 1);	// якщо всі норми >=1, то ітераційний процеc не сходиться (СЛАР не має розв'язку)
}
//=============== підпрограма округлення елементів масиву до вказаного розряду ================
float* RoundRez(float *a, int n, int rozr) { 
	for (int i = 0; i < n; i++) {	// цикл по всіх елементах масиву
		a[i] = ((int)(a[i] * rozr + (a[i] >= 0 ? 0.5 : -0.5)) / (float)rozr)	;
	}
	return a;
}
		