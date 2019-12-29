#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;
int price[10001];
int max_price[10001];

int max2(int a, int b) {
	return a > b ? a : b;
}

int main(void) {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n;i++)
		scanf("%d", &price[i]);
	max_price[1] = price[1];
	for (int i = 2; i <= n; i++) {
		max_price[i] = price[i];
		for (int j = 1; j < i; j++) {
			max_price[i] = max2(max_price[i], max_price[i - j] + price[j]);
		}
	}
	printf("%d", max_price[n]);
}