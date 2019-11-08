#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main(void) {
	string s;
	cin >> s;
	int n;
	cin >> n;
	stack<char>l, r;
	for (int i = 0; i < s.length(); i++)
		l.push(s[i]);
	for (int i = 0; i < n; i++) {
		char c;
		cin >> c;
		if (c == 'L') {
			if (!l.empty()) {
				r.push(l.top());
				l.pop();
			}
		}
		else if (c == 'D') {
			if (!r.empty()) {
				l.push(r.top());
				r.pop();
			}
		}
		else if (c == 'B') {
			if (!l.empty())
				l.pop();
		}
		else
		{
			char p;
			cin >> p;
			l.push(p);
		}

	}
	string result;

	while (!l.empty()) {
		r.push(l.top());
		l.pop();
	}
	while (!r.empty()) {
		result += r.top();
		r.pop();
	}
	cout << result << "\n";
}