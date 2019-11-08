#include <iostream>
#include <string>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int k;
		string s;
		cin >> k;
		cin >> s;
		for (int j = 0; j < s.length(); j++) {
			for (int o = 0; o < k; o++) {
				cout << s[j];
			}
		}
		cout << "\n";
	}
	return 0;
}