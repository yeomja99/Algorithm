#include <iostream>
#include <string>
using namespace std;
int main(void) {
	int ll, cl, nc, nw;
	for (int i = 0; i < 100; i++) {
		string s;
		getline(cin, s);
		ll = cl = nc = nw = 0;
		if (s.length() == 0)
			break;
		for (int i = 0; i < s.length(); i++) {

			if (s[i] >= 'a' && s[i] <= 'z')
				ll++;
			else if (s[i] >= 'A' && s[i] <= 'Z')
				cl++;
			else if (s[i] >= '0' && s[i] <= '9')
				nc++;
			else if (s[i] == ' ')
				nw++;
		}
		cout << ll << " " << cl << " " << nc << " " << nw << "\n";
	}
}