#include <iostream>
#include <string>
using namespace std;
int main(void) {
	string a, b, c, d;
	cin >> a >> b >> c >> d;
	string n1, n2;
	n1 = a + b;
	n2 = c + d;
	cout << stoll(n1) + stoll(n2) << "\n";
}