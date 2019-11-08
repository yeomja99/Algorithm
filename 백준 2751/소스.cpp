#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	vector<int>v;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());

	cout << v[0] << "\n";
	for (int i = 1; i < v.size(); i++) {

		if (v[i] == v[i - 1]) {
			;
		}
		else
			cout << v[i] << "\n";
	}
}