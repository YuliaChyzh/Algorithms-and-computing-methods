#include "equation.h" 

using namespace std;

double f(double x) {
	return (2 * log10(x) - x / 2 + 1);
}
double f1(double x)
{
	return (2 / (x*log(10.0)) - 1 / 2);
}
double f2(double x)
{
	return (-2 / (pow(x, 2)*log(10.0)));
}

double metHord(double constant, double x){
	return x - (f(x)*(constant - x)) / (f(constant) - f(x));
}

double solveFunktion(double a, double b, double eps){
	if (f(b)*f2(b) > 0)
		swap(a, b);
	return trunc(counting(a, b, eps) * 10000) / 10000;
}

double counting(double constant, double change, double eps) {
	//double eps = 10e-6;
	double x = metHord(constant, change);
	while (fabs(x - change) > eps){
		change = x;
		x = metHord(constant, change);
	}
	return x;
}

