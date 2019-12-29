#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main(void) {
	int n; int count = 0;
	int arr[6];
	arr[0] = 500; arr[1] = 100; arr[2] = 50;
	arr[3] = 10; arr[4] = 5; arr[5] = 1;
	scanf("%d", &n);
	int change = 1000 - n;
	for (int i = 0; i < 6; i++) {
		if (change == 0) break;
		if (arr[i] > change) continue;

		count += change / arr[i];
		change %= arr[i];

	}
	printf("%d", count);
	return 0;
}