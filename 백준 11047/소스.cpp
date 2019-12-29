#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	int n; int k;
	int count = 0;
	vector<int>money;
	scanf("%d %d", &n, &k);
	for (int i = 0; i < n; i++) {
		int p;
		scanf("%d", &p);
		money.push_back(p);
	}

	for (int i = n - 1; i >= 0; i--) {
		if (k == 0) break;
		if (money[i] > k) continue;
		
		count += k / money[i];
		k%=money[i];
	}
	printf("%d", count);
	return 0;

}