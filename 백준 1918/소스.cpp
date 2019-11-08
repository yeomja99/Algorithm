#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main(void) {
	string s;
	cin >> s;
	string result;
	stack<char>st;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] >= 'A' && s[i] <= 'Z')
			result += s[i];
		else {
			switch (s[i]) {
			case '(':
				st.push(s[i]);
				break;
			case '*': case '/':
				while (!st.empty() && (st.top() == '*' || st.top() == '/')) {
					result += st.top();
					st.pop();
				}
				st.push(s[i]);
				break;
			case '+':case'-':
				while (!st.empty() && st.top() != '(') {
					result += st.top();
					st.pop();
				}
				st.push(s[i]);
				break;
			case ')':
				while (!st.empty() && st.top() != '(') {
					result += st.top();
					st.pop();
				}
				st.pop();
				break;
			}
		}
	}
	while (!st.empty()) {
		result += st.top();
		st.pop();

	}
	cout << result << "\n";
}