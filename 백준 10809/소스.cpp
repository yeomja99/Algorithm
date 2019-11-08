#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(void) {
	vector<int> po;
	for (int i = 0; i < 26; i++)
		po.push_back(-1);
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		if (po[s[i] - 'a'] == -1)
			po[s[i] - 'a'] = i;
	}

	for (int i = 0; i < po.size(); i++) {
		cout << po[i] << " ";
	}
	return 0;
}