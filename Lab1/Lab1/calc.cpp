#include "calc.h"

using namespace std;

double DoAlgo1(double a, double b) {
	return (a / b - 5) / 2 + sqrt((b / a + 5) / 3);
}
	
double DoAlgo2(int i, double q, double d, double v, double x, double c, double h, double p){

	if (i%3 == 0) return pow(q,i)*d/sqrt(v+x)+pow(p,i)*d/sqrt(c+h);
	else return v*d/sqrt(pow(q, i) + x) + c*d/sqrt(pow(p, i) + h);
}

double DoAlgo3(int n) {
	double f = 1;
	for (float a = 1; a <= n; a += 0.25)
	for (float b = 1; b <= n; b++)
		if (a != b) f *= (pow(a, 4) + pow(b, 4)) / (pow(a, 4) - pow(b, 4));
	return f;
}
