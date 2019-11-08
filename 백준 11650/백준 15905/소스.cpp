#include <stdio.h>
#include <algorithm>
using namespace std;
typedef struct _pro {
	int pr;
	int sc;
}pro;
bool cmp(const pro& a, const pro& b) {
	if (a.pr == b.pr) {
		return a.sc < b.sc;
	}
	return a.pr > b.pr;
}

int main(void) {
	int n;
	int ch = 0;
	scanf("%d", &n);
	pro per[67];
	for (int i = 0; i < n; i++)
		scanf("%d %d", &per[i].pr, &per[i].sc);
	sort(per, per + n, cmp);
	for (int i = 5; i < n; i++) {
		if (per[4].pr == per[i].pr)
			ch++;
	}
	printf("%d\n", ch);
}