#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main(void) {
	string s;
	cin >> s;
	int count = 0;
	stack<char>st;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '(') {
			st.push(s[i]);
		}
		else {
			st.pop();
			if (s[i - 1] == '(') {
				count += st.size();
			}
			else
				count += 1;
		}

	}
	cout << count << "\n";
}