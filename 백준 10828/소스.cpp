#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	vector<int>stack;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		if (s == "push") {
			int o;
			cin >> o;
			stack.push_back(o);
		}
		else if (s == "pop") {
			if (stack.size() == 0)
				cout << "-1" << "\n";
			else
			{
				cout << stack.back() << "\n";
				stack.pop_back();
			}
		}
		else if (s == "size") {
			cout << stack.size() << "\n";
		}

		else if (s == "empty") {
			if (stack.size() == 0)
				cout << "1" << "\n";
			else
				cout << "0" << "\n";
		}

		else if (s == "top") {
			if (stack.size() == 0)
				cout << "-1" << "\n";
			else
				cout << stack.back() << "\n";
		}
	}
}