#include <iostream>
#include <string>
using namespace std;

int main(void) {
	string s;
	cin >> s;
	int count = 0;
	for (int i = 0; i < s.length(); i++) {
		char c = s[i];
		if (c == 'c') {
			if (s[i + 1] == '=' || s[i + 1] == '-') {
				count++; i++;
			}
			else
				count++;
		}
		else if (c == 'd') {
			if (s[i + 1] == 'z' && s[i + 2] == '=') {
				count++; i += 2;
			}
			else if (s[i + 1] == '-') {
				count++; i++;
			}
			else count++;
		}
		else if (c == 'l' || c == 'n')
			if (s[i + 1] == 'j') {
				count++; i++;
			}
			else
				count++;
		else if (c == 's' || c == 'z')
			if (s[i + 1] == '=')
			{
				count++; i++;
			}
			else count++;
		else
			count++;
	}
	cout << count;
	return 0;
}