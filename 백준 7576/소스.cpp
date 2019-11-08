#include <iostream>
#include <queue>

using namespace std;
int box[1001][1001];
queue<pair<int, int>>q;
int dir[4][2] = { {-1,0},{1,0},{0,-1},{0 ,1} };

int main(void) {
	int m, n;
	int total = 0;
	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> box[i][j];
		}
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (box[i][j] == 1) {
				q.push(make_pair(i, j));
			}
			else if (box[i][j] == -1)
				total++;
		}
	}

	pair<int, int>curr;
	int size, days = 0;
	int nx, ny;

	while (!q.empty()) {
		size = q.size();
		total += size;

		if (total == n * m) {
			cout << days;
			break;
		}

		for (int i = 0; i < size; i++) {  //q에 저장된 만큼 반복
			curr = q.front();
			q.pop();

			for (int j = 0; j < 4; j++) {
				nx = curr.first + dir[j][0];
				ny = curr.second + dir[j][1];

				if (nx < 0 || nx >= m || ny < 0 || ny >= n || box[nx][ny] != 0)
					continue;

				else if (box[nx][ny] == 0) {
					box[nx][ny] = 1;
					q.push(make_pair(nx, ny));
				}
			}
		}
		days++;

	}
	if (total != n * m)
		cout << "-1";
	return 0;
}
