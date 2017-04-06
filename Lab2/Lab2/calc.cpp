#include "calc.h"

using namespace std;

void SortMass(double *arr,int size) {
	for (int min = 0; min<size - 1; min++) {
		int least = min;
		for (int j = min + 1; j<size; j++) {
			if (arr[j] < arr[least]) {
				least = j;
			}
		}
		/*double tmp = arr[min];
		arr[min] = arr[least];
		arr[least] = tmp;*/
		swap(arr[min], arr[least]);
	}
}
