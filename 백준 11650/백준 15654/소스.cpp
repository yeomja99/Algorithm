#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n, m;;
int a[8];
bool check[8];

void reflex(int cnt, vector<int>& v) {
	if (cnt == m) {
		for (int i = 0; i < m; i++)
			cout << v[i] << " ";
		cout << '\n';
		return;
	}
	for (int i = 0; i < n; i++) {
		if (check[i] == false) {
			check[i] = true;
			v.push_back(a[i]);
			reflex(cnt + 1, v);
			v.pop_back();
			check[i] = false;
		}

	}
}

int main(void) {
	int cnt = 0;
	cin >> n >> m;
	vector<int>v;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	reflex(cnt, v);
}