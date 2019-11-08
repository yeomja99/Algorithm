#include <stdio.h>

int a[10001];

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int k;
		scanf("%d", &k);
		a[k]++;
	}
	int t = 1;
	while (t <= 10000) {
		if (a[t] != 0) {
			printf("%d\n", t);
			a[t]--;
		}
		else {
			t++;
		}
	}
	return 0;
}