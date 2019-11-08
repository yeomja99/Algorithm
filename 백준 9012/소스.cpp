#include <iostream>
#include <stack>
#include <string>
using namespace std;
bool check(string str) {
	stack<char>st;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '(')
			st.push(str[i]);
		else {
			if (!st.empty())
				st.pop();
			else
				return false;

		}

	}
	return st.empty();
}
int main(void) {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		if (check(s))
			cout << "YES" << "\n";
		else
			cout << "NO" << "\n";
	}
}