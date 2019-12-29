#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int min(int a, int b, int c) {
	if (a <= b)
		if (a <= c) return a;
		else return c;

	else if (b <= c)
		if (b <= a) return b;
		else return a;

	else if (c <= a)
		if (c <= b) return c;
		else return b;
	

}

int arr[1000001];

int main(void) {
	int n;
	scanf("%d", &n);
	arr[1] = 0;
	arr[2] = 1;
	for (int i = 3; i <= n; i++) {
		int a, b, c;
		a = b = c = i;
		a = arr[i - 1];
		if (i % 2 == 0)
			b = arr[i / 2];
		if (i % 3 == 0)
			c = arr[i / 3];
		arr[i] = min(a, b, c) + 1;
	}
	printf("%d", arr[n]);
	return 0;
}