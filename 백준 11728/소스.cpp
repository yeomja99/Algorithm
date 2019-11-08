#include <iostream>
using namespace std;

int main(void) {
	int n; int m;
	cin >> n >> m;
	int* a = new int[n];
	int* b = new int[m];
	int* nv = new int[n + m];
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for (int i = 0; i < m; i++)
		scanf("%d", &b[i]);
	int lptr = 0; int rptr = 0; int nptr = 0;
	while (lptr < n && rptr < m) {
		if (a[lptr] < b[rptr])
			nv[nptr++] = a[lptr++];
		else
			nv[nptr++] = b[rptr++];
	}

	while (lptr < n)
		nv[nptr++] = a[lptr++];
	while (rptr < m)
		nv[nptr++] = b[rptr++];
	for (int i = 0; i < n + m; i++)
		printf("%d ", nv[i]);
	return 0;
}