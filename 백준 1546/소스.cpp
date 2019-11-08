#include<iostream>
#include<stdlib.h>
using namespace std;
int main(void) {
	int n;
	double* arr;
	double avg = 1;
	double max = 0;
	double sum = 0;
	cin >> n;
	arr = (double*)calloc(n, sizeof(double));
	for (int i = 0; i < n; i++) {
		int g;
		cin >> g;
		arr[i] = g;
	}
	for (int i = 0; i < n; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	for (int i = 0; i < n; i++) {
		arr[i] = arr[i] / (double)max * 100;
	}

	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}
	avg = (double)sum / n;
	cout << avg;
}