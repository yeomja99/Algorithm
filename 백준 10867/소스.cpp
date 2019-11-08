#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(void) {
	int n;
	cin >> n;
	int* arr;
	vector<int>p;
	arr = (int*)calloc(n, sizeof(int));
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);

	for (int i = 0; i < n; i++) {
		if (arr[i] != arr[i + 1])
			p.push_back(arr[i]);
	}
	for (int i = 0; i < p.size(); i++) {
		cout << p[i] << " ";
	}
	cout << endl;
}