#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(void) {
	vector<int> cnt;
	for (int i = 0; i < 26; i++)
		cnt.push_back(0);
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++)
		cnt[s[i] - 'a']++;
	for (int i = 0; i < cnt.size(); i++)
		cout << cnt[i] << " ";
}