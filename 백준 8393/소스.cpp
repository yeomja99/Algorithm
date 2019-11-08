#include <iostream>
using namespace std;
int main(void) {
	int n;
	cin >> n;
	int cn = 0;
	for (int i = 0; i < n; i++)
		cn += i + 1;
	cout << cn << "\n";
}