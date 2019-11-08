#include <iostream>
#include <queue>
using namespace std;
int main(void) {
	int count;
	int t;
	cin >> t;
	int n, m, ipt;
	for (int i = 0; i < t; ++i) {
		count = 0;
		cin >> n >> m;
		queue<pair<int, int>>q;
		priority_queue<int>pq;
		for (int j = 0; j < n; j++) {
			cin >> ipt;
			q.push({ j,ipt });
			pq.push(ipt);
		}
		while (!q.empty()) {
			int index = q.front().first;
			int value = q.front().second;
			q.pop();
			if (pq.top() == value) {
				pq.pop();
				++count;
				if (index == m) {
					cout << count << "\n";
					break;
				}
			}
			else q.push({ index,value });
		}
	}
}