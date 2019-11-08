#include <iostream>
#include <vector>
using namespace std;
int main(void) {
	int n; int x;
	cin >> n >> x;
	vector<int>v;
	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		v.push_back(k);
	}

	for (int i = 0; i < n; i++) {
		if (v[i] < x)
			cout << v[i] << " ";
	}
	return 0;
}