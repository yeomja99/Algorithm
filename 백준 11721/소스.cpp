#include <iostream>
#include <string>
using namespace std;
int main(void) {
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		char c;
		c = s[i];
		cout << s[i];
		if (i % 10 == 9)
			cout << "\n";
	}
	cout << "\n";
}