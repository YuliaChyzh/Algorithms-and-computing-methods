#include "calc.h"

void SortMass(double *arr, int size, unsigned int &times) {
	times = 0;
	for (int min = 0; min < size - 1; min++) {
		int least = min;
		times++;
		for (int j = min + 1; j < size; j++) {
			if (arr[j] < arr[least]) {
				least = j;
				times++;
			}
		}
		swap(arr[min], arr[least]);
		times += 3;
	}
}
