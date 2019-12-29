#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int arr[10001];

int main(void) {
	int n;
	scanf("%d", &n);
	arr[1] = 1;
	arr[2] = 2;
	for (int i = 3; i <= n; i++)
		arr[i] = (arr[i - 1] + arr[i - 2]) % 10007;
	printf("%d", arr[n]);
	
}