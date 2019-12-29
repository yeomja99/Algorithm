#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int arr[11];

void init() {
	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 4;
	for (int i = 4; i <= 11; i++) {
		arr[i] = 0;
	}
}
int time(int num) {
	for (int j = 4; j <= num; j++) {
		arr[j] = arr[j - 1] + arr[j - 2] + arr[j - 3];
	}
	return arr[num];

}

int main(void) {
	int t;
	scanf("%d", &t);


	for (int i = 0; i < t; i++) {
		init();
		int n;
		scanf("%d", &n);
		int result;
		result = time(n);
		printf("%d\n", result);
	}
	return 0;

	
}