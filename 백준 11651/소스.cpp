#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

typedef struct point {
	int x;
	int y;
}point;

bool cmp(const point& a, const point& b) {
	if (a.y == b.y)
		return a.x < b.x;
	return a.y < b.y;
}

int main(void) {
	int n;
	cin >> n;
	point* arr;
	arr = (point*)malloc(sizeof(point) * n);

	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		arr[i].x = x;
		arr[i].y = y;
	}

	sort(arr, arr + n, cmp);

	for (int i = 0; i < n; i++) {
		cout << arr[i].x << " " << arr[i].y << "\n";
	}
}

