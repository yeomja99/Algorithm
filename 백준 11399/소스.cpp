#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	vector<int> p;
	int t[1000];
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int k;
		scanf("%d", &k);
		p.push_back(k);
	}
	sort(p.begin(), p.end());
	int o = 0;
	t[0] = p[0];
	for (int i = 1; i <n; i++) {
		t[i] =t[i - 1] + p[i];
	}
	int result = 0;
	for (int i = 0; i < n; i++) {
		result += t[i];
	}
	printf("%d", result);
	return 0;
}