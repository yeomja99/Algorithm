#include <iostream>

using namespace std;

int main(void) {
	int n, l;
	cin >> n >> l;
	int t = 0; //�ɸ��� �ð�
	int c = 0; //����ġ

	for (int i = 0; i < n; i++) {
		int d, r, g;
		cin >> d >> r >> g;
		t += d - c;
		c = d;

		int s; //signal
		s = t % (r + g);
		if (s < r) //red
			t += r - s;

	}
	cout << t + l - c;
	return 0;
}