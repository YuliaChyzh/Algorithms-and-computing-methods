// ���� ��������� ��������� �����������

#include "calc.h"

using namespace std;

unsigned int kolIter;		// ������� �������� ������
float EPS;					// ������� ����������
int Dec;					// ������� ������ ����������
float w;					// �������� ����������

//=============== ���������� ���������� �������� ������ ������� � ����� ==============
float** inpMatrixInFile(int n, const char *str) {// ��������� �������, �������� �� ����� �������
	stringstream streamRead(str);		// ������������ char * � ���� (����) (��� ���� � ����� ������ �����)
	int kolRow = 0, kolCol = 0;			//	���� ��������� ���������� ����� � �������
	float **matrix = new float*[n];	// ��������� ���� �������
	bool err = false;		// ��������� ������� (������� �������)
	for (int row = 0; row < n && !err; row++) {	// ���� �� N ������ � ���� ���� ������� 
		matrix[row] = new float[n+1];			// ��������� ������ ����� �������
		kolCol = 0;			// ��������� ������� �������
		for (int col = 0; col < n+1 && !err; col++) {		// ���� �� N �������� � ���� ���� �������
			float el = 0;	// ����������� ����� (��������� �������� �������� �������) 
			streamRead >> el;		// ��������� �� ������ �������� �������� 
			err = (streamRead) ? false : true;	// ���� ��� ����� �����, � �� �� �� �������� ��������� (�� ������� � ����� �������), ������ ���������  
			if (streamRead) {	// ���� �������� � ���� �� ����� �� NULL, ��	
				matrix[row][col] = el;	// �������� � �������� ������� ������� ���������� �� ������ �������
				kolCol++;		// �������� ������� ���������� � ����� �������� �� 1
			}
			else err = true;	// ������ ������ ���������
		}
		err = !(kolCol == n+1);	// ���� ������� ���������� � ����� �������� !=N, ������ ���������
		kolRow++;				// �������� ������� ���������� ����� �� 1
	}
	if (!err && kolRow == n)	// ���� �� �������� ������� � ������� ���������� ����� ==N, ��
		return matrix;		// ��������� ������ �� �������� ������� �� ����������� ���������� (��������� �����)
	else
		return NULL;		// ��������� NULL (������� ������� �����)
}
// ============= ���������� ��������� ������ ������� ��������� ============================================
float* calc_SLAR(float **matrix, int n) {
	//������� ���� Au=f ������� ����������; w - �������� ������� ����������� ��� ������ ���������� � ������������ ��� �������� ����������
	// A=L+D+U, ��: L- ������������; U- �������������; D - ����������;      
	//
	//u[k+1]=-(wL+D)^(-1)*(wU+(t-1)D)*u[k]+(wL+D)^(-1)*f
	//        (---Inv---)				   (---Imv---) 				
	//		 (-----Q1---)*(---Q2----)	
	//		 (-----------Q----------)  ^   (-------G----)				
	
	float **A = normingMatrix(matrix, n, (1 / norm3(matrix, n)));		// ���������� ������� A �� ������ ���������
	A = normingMatrix(A, n);	// ������������ ������� (��� A[i][i]==1)

	float *f = new float[n];
	for (int i = 0; i < n; f[i] = A[i][n], i++);  		// f[i] - ������ ������ �������� (� ����� ���� ����'����)
		
	float **U = VT(A, n);		// �������� � � ��������������� ������� U
	float **L = NT(A, n);		// �������� � � �������������� ������� L
	float **D = DM(A, n);		// �������� � � ���������� ������� D

	float **Inv = Inverse(sumMatrix(D, A_scalar_Num(L, n, w), n), n);		//Q1=(D+w*L)^(-1)
	float *G = A_mult_V(A_scalar_Num(Inv, n, w), f, n);						//G=w*((w*L+D)^(-1))*f
	
	float **Q1 = A_scalar_Num(Inv, n, -1);											//Q1=-1*((D+w*L)^(-1))
	float **Q2 = sumMatrix(A_scalar_Num(D, n, w - 1), A_scalar_Num(U, n, w), n);		//Q2=((w-1)*D + w*U)
	float **Q = A_scalar_B(Q1, Q2, n);												//Q=Q1*Q2=(-(D+w*L)^(-1)) * ((w-1)*D + w*U)

	kolIter = 0;
	float norma;
	do {
		kolIter++;	// �-��� �������� ++
		float *u = A_mult_V(Q, f, n);		//u=Q*f
		float *xn = new float[n];
		float *v = new float[n];
		for (int i = 0; i < n; xn[i] = u[i] + G[i], i++);			//xn=Q*f+G
		for (int i = 0; i < n; v[i] = fabs(xn[i] - f[i]), i++);		//v=|xn-f|
		for (int i = 0; i < n; f[i] = xn[i], i++);					//f=xn
		norma = modulV(v, n);	// ��������� ������� (������ ������� V)
	} while (norma >= EPS);		// ���� ������� ����� ������ �������

	clear(A, n);	// �������� ���'��� �� ������� �� �������
	clear(U, n);
	clear(L, n);
	clear(D, n);
	clear(Q1, n);
	clear(Q2, n);
	clear(Inv, n);
	clear(Q, n);
	delete[] G;		
	return f;		// ��������� ������ ������� ����'����
}
// ============= ���������� ��������� ������ (2) ������� ��������� ============================================
float* calc_SLAR2(float **matrix, int n) {
	float **A = normingMatrix(matrix, n);	// ������������ ������� (��� A[i][i]==1)
	float *xn = new float[n];
	for (int i = 0; i < n; xn[i] = A[i][n], i++); 	// ����������� ����������� ����������
	float norma;
	float *Rez = new float[n];	// ������ ����'���� 
	kolIter = 0;
	do {
		kolIter++;		// �-��� �������� ++
		for (int i = 0; i<n; i++) {
			Rez[i] = A[i][n];				// Rez = ������� ������ �������� 
			for (int j = 0; j<n; j++) {
				if (i != j)
					Rez[i] = Rez[i] - A[i][j] * Rez[j];
			}
			Rez[i] = w * Rez[i] + (1 - w) * xn[i];
		}
		float *v = new float[n];
		for (int i = 0; i < n; v[i] = fabs(xn[i] - Rez[i]), i++);	// v=|xn-Rez|
		for (int i = 0; i < n; xn[i] = Rez[i], i++);				// xn=Rez
		norma = modulV(v, n);	// ��������� ������� (������ ������� V)
	} while (norma >= EPS);		// ���� ������� ����� ������ �������
	clear(A, n);	// �������� ���'��� 
	return Rez;		// ��������� ������ ����'����
}
// ============= ���������� ��������� ������ ������� ��������� ============================================
float* calc_SLAR3(float **A, int n) {
	float *C = new float[n];		// ������ ������ �����
	float *Y = new float[n];		// ������ ������� ���������� ��������
	float *X = new float[n];		// ������ ���������� (������� ��������)

	float **B = newMatrix(n);		// ������� �������
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
			for (int i = 0; i <n; Y[i] = X[i], i++);	// �������� �������� ����������
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
				X[i] = w * sq_z[i] + (1 - w) * sq_y[i];	// �������� �������� ����������
			}
			float *v = new float[n];
			for (int i = 0; i < n; v[i] = fabs(X[i] - Y[i]), i++);		// v=|X-Y|
			norma = modulV(v, n);	// ��������� ������� (������ ������� V)
			kolIter++;
//			if (kolIter>10000) break;
		} while (norma >= EPS  && kolIter<10000);		// ���� ������� ����� ������ ������� � �-��� �������� <1000
	}

	clear(B, n);	// �������� ���'��� �� ������� �� �������
	delete[] C;
	delete[] Y;
	delete[] sq_z;
	delete[] sq_y;

	return X;
}
//=============== ���������� ���������� ������� �� ���������� ������� ������� ����� (������ ���) ================
float** GausStraight(float **matrix, int n) { // ������ ������ �������,  ��������� �������
	float **B = clone(matrix, n);		// ���� �������
	for (int step = 0; step < n - 1; step++)
	for (int row = step + 1; row < n; row++) {
		if (!B[step][step]) {	// ���� ������� �� ������� ������� == 0, �� ������ ����� �����, �� �����, ���, � ����� ������� � ��� ������� <> 0 
			bool flag = false;	// ��������� ������
			for (int row1 = step; row1 < n && !flag; row1++) {	// ���� �� ��� ������, �� ����� ������
				if (B[row1][step]) {	// ���� ������� ���������� �������, 
					swap(B, n, step, row1);	// �� ������� ����� ������
					flag = true;		// ������ ���������
				}
			}
			if (!flag) return B;	// ���� � ������� � �����, �� ����� ������, ���� ����������� �������� � ��� �������, ��������� ������� (���� � �� ��������� �� �������� - ��������� � �� ���� ==0)
		}
		float coeff = -B[row][step] / B[step][step];	// ���������� 
		for (int col = step; col < n; B[row][col] += B[step][col] * coeff, col++);		// ���� ��������
	}
	return B;	// ��������� ������ �� �������
}
//=============== ���������� ��������� ������ �������-�����  ================
float** Inverse(float **matrix, int n) { // ������ ������ �������,  ��������� �������
	float **B = clone(matrix, n);	// ���� ������ �������
	float **I = oneMatrix(n);		// ����������� �������� ������� ���������� ������ � ������� ��������
	float coeff = 1.0;
	for (int step = 0; step < n; step++) {	// ���� �� ��� �������� ������ ������� 
		if (!B[step][step]) {		// ���� �������� ������� == 0
			bool flag = false;		// ������ ����� �����
			for (int row = step; row < n && !flag; row++) {		// ���� �� ��� ������, �� ����� ������ ��� �� ������� ����� 
				if (B[row][step]) {	// ���� ��� ������� !=0
					swap(B, n, step, row);	// ���� ������ ����� ������ ������� 
					swap(I, n, step, row);	// ���� ������ ����� �������� ������� 
					flag = true;			// ������ ���������
				}
			}
		}
		coeff = B[step][step];		// �������� �������� ������� (������� � ������� ������� ������� ������� ������ �������) 
		if (coeff != 1.0) {
			for (int col = step; col < n; B[step][col] /= coeff, col++);	// �������� �� �������� ����� ������ �������, � ����� ��������� �������� ������� �� �������� ������� (�������� 1 �� �������)
			for (int col = 0; col < n; I[step][col] /= coeff, col++);		// �������� �� �������� ����� �������� ������� �� ��� ����� �������� �������
		}
		for (int row = 0; row < n; row++) {	// ���� �� ��� ������ ������ � �������� ������� 
			if (row != step) {
				coeff = -B[row][step];		// ���������� - ���������� �������� �������� � �-�� ����� ������� ������� 
				for (int col1 = step; col1 < n; B[row][col1] += B[step][col1] * coeff, col1++);		// ���� ����� �������� ��������� ����� ������ �������, ����������� �� ����������, �� �������� �-�� ����� (�������� 0 � ��� ������ ������� �������, ��� ������� �������)
				for (int col1 = 0; col1 < n; I[row][col1] += I[step][col1] * coeff, col1++);		// ���� ��� �������� ��������� ����� �������� �������, ����������� �� ����������, �� �������� �-�� ����� �������� �������
			}
		}
	}
	clear(B, n);
	return I;	// ��������� ������ �� �������� �������
}
//=============== ���������� ����� ������ ���� ����� �������  ================
void swap(float **matrix, int n, int row_in, int row_to) { // ������ ������ �������,  ���������, � �����, � �����
	for (int col = 0; col < n + 1; swap(matrix[row_in][col], matrix[row_to][col]), col++);
}
//=============== ���������� ������� ������� ���'�� ================
void clear(float **matrix, int n) { // ������ ������ �������,  ��������� �������
	for (int i = 0; i < n; i++) delete[] matrix[i];	 // ������� ���'�� �� �����
	delete[] matrix;	// ������� ���'�� �� ����� �������
}
//=============== ���������� ��������� ���� ������� ================
float** newMatrix(int n) { // ������ ������ �������,  ��������� �������
	float **newArr = new float*[n];		// ��������� ���� �������
	for (int row = 0; row < n; row++) {
		newArr[row] = new float[n];		// ��������� ������ ����� �������
		for (int col = 0; col < n; newArr[row][col] = 0, col++);	// ������������ �� �������� � 0
	}
	return newArr;		// ��������� ������ �������
}
//=============== ���������� ��������� ��ﳿ ������� ================
float** clone(float **matrix, int n) { // ������ ������ �������,  ��������� �������
	float **newArr = new float*[n];		// ��������� ���� �������
	for (int row = 0; row < n; row++) {
		newArr[row] = new float[n + 1];		// ��������� ������ ����� �������
		for (int col = 0; col < n + 1; col++)
			newArr[row][col] = matrix[row][col];	// ��������� �� �������� � ���� �������
	}
	return newArr;		// ��������� ������ �� ���� �������
}
//=============== ���������� ���������� � ������� � ��������������� ������� ================
float **VT(float **a, int n) {
	float **result = newMatrix(n);
	for (int i = 0; i<n; i++)
		for (int j = 0; j<n; j++)
		if (i<j) result[i][j] = a[i][j];
	return result;
}
//=============== ���������� ���������� � ������� � �������������� ������� ================
float **NT(float **a, int n) {
	float **result = newMatrix(n);
	for (int i = 0; i<n; i++)
		for (int j = 0; j<n; j++)
		if (i>j) result[i][j] = a[i][j]; 
	return result;
}
//=============== ���������� ���������� � ������� � ���������� ������� ================
float **DM(float **a, int n) {
	float **result = newMatrix(n);
	for (int i = 0; i<n; i++)
		for (int j = 0; j<n; j++)
		if (i == j) result[i][j] = a[i][j];
	return result;
}
//=============== ���������� ������� ���� ������� ================
float** A_scalar_B(float **A, float **B, int n) { 
	float **result = newMatrix(n);
	for (int row = 0; row < n; row++) 		// ��������� ������� ���� �������
	for (int col = 0; col < n; col++) {
		for (int j = 0; j < n; result[row][col] += A[row][j] * B[j][col], j++);	// ����������� �� �������, ��������� �������� � result  
	}
	return result;		// ��������� ������ �� ��������� ��������
}
//=============== ���������� ������� ������� �� ����� ================
float **A_scalar_Num(float **a, int n, float t) {
	float **result = newMatrix(n);
	for (int i = 0; i < n; i++)
	for (int j = 0; j < n; result[i][j] = t*a[i][j], j++);
	return result;
}
//=============== ���������� ������� ������� �� ������ ================
float *A_mult_V(float **a, float *b, int n) {
	float *result = new float[n];;
	for (int i = 0; i < n; i++) {
		result[i] = 0;
		for (int j = 0; j < n; result[i] += a[i][j] * b[j], j++);
	}
	return result;
}
//======= ���������� ���������� ������ ������� (����� �� ���� �������� ��������) ================
float modulV(float *X, int n) {
	float s=0;
	for (int i = 0; i < n; s += (X[i] * X[i]), i++);
	return sqrt(s);
}
//=============== ���������� ���������� ���� ���� ���������� ������� ================
float **sumMatrix(float **a, float **b, int n) {
	float **c = newMatrix(n);
	for (int i = 0; i<n; i++)
	for (int j = 0; j < n; c[i][j] = a[i][j] + b[i][j], j++);
	return c;
}
//=============== ���������� ���������� ���������� ������� ================
detSLAR detMatrix(float **matrix, int n) {	// ������ ������ �������,  ��������� �������
	float **B = GausStraight(matrix, n);	// �������� ������� �� ���������� ������� ������� �����
	detSLAR rezult;
	for (int i = 0; i < n; i++) {
		rezult.det *= B[i][i];				// ��������� � �������� �������� ������� �������
		rezult.kol = rezult.kol && !(!B[i][i] && B[i][n]);		// ���� B[i][i]==0 � ������ ���� !=0, �� �������� false (���� ����'����)
	}
	clear(B, n);			// �������� ���'��� �� ������� �
	return rezult;			// ��������� �������� ����������
}

//=============== ���������� ��������� �������� � ������� ==============
float** oneMatrix(int n) { 
	float **matrix = new float*[n];		// ��������� ���� �������
	for (int row = 0; row < n; row++) {
		matrix[row] = new float[n];		// ��������� ������ ����� �������
		for (int col = 0; col < n; matrix[row][col] = (row == col) ? 1 : 0, col++);	// ����� "1" � ������� ��������
	}
	return matrix;		// ��������� ������ �������� �������
}
//=============== ���������� ���������� ����� ����� ������� ================
float norm1(float **matrix, int n) { 
	float res = 0.0;		
	for (int row = 0; row < n; row++) {
		float sum = 0;
		for (int col = 0; col < n; sum += matrix[row][col], col++);		// ���� �������� row-�� ����� �������
		res = (sum > res) ? sum : res;
	}
	return res;		// ��������� �������� ����� �����
}
//=============== ���������� ���������� ����� ����� ������� ================
float norm2(float **matrix, int n) { 
	float res = 0.0;
	for (int col = 0; col < n; col++) {
		float sum = 0;
		for (int row = 0; row < n; sum += matrix[row][col], row++);		// ���� �������� col-�� ������� �������
		res = (sum > res) ? sum : res;
	}
	return res;		// ��������� �������� ����� �����
}
//=============== ���������� ���������� ������ ����� (���������) ������� ================
float norm3(float **matrix, int n) { 
	float res = 0.0;		
	for (int row = 0; row < n; row++)
	for (int col = 0; col < n; res += pow(matrix[row][col], 2), col++);		// ���� �������� �������� �������
	return sqrt(res);		// ��������� �������� ����� ���������
}
//=============== ���������� ���������� ������ ������� ================
float** normingMatrix(float **matrix, int n, float t) {
	float **B = clone(matrix, n);		// ���� �������
	for (int i = 0; i < n; i++)
	for (int j = 0; j < n + 1; B[i][j] = t * B[i][j], j++);
	return B;
}
//=============== ���������� ���������� ������ ������� ================
float** normingMatrix(float **matrix, int n) {
	float **B = clone(matrix, n);		// ���� �������
	for (int i = 0; i < n; i++) 
		for (int j = 0; j < n + 1; B[i][j] /= matrix[i][i], j++);
	return B;
}
//=============== ���������� �������� ������������ ������� �� ���������� ================
bool check�onvergence(float **matrix, int n) {
	float **B = normingMatrix(matrix, n, (1 / norm3(matrix, n)));		// ���������� ������ ������� �� ������ ���������
	return (norm1(B, n) >= 1 && norm2(B, n) >= 1 && norm3(B, n) >= 1);	// ���� �� ����� >=1, �� ����������� �����c �� ��������� (���� �� �� ����'����)
}
//=============== ���������� ���������� �������� ������ �� ��������� ������� ================
float* RoundRez(float *a, int n, int rozr) { 
	for (int i = 0; i < n; i++) {	// ���� �� ��� ��������� ������
		a[i] = ((int)(a[i] * rozr + (a[i] >= 0 ? 0.5 : -0.5)) / (float)rozr)	;
	}
	return a;
}
		