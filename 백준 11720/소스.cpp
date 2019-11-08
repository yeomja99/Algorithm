#include <iostream>
#include <string>
using namespace std;

int main(void) {
	char* s;
	int cnt, sum = 0;
	cin >> cnt;
	s = (char*)calloc(cnt, sizeof(char));
	cin >> s;
	for (int i = 0; i < cnt; i++) {
		int n;
		n = s[i] - '0';
		sum += n;
	}
	cout << sum << '\n';
}