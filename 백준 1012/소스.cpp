#include <iostream>
#include <queue>
#include <cstdio>

using namespace std;

int dir[4][2] = { {-1,0},{1,0},{0,-1},{0,1} };
int m, n, c;

void init(int arr[50][50], bool varr[50][50]) {
	for (int i = 0; i < 50; i++) {
		for (int j = 0; j < 50; j++) {
			arr[i][j] = 0;
			varr[i][j] = false;
		}
	}
}
int bfs(int arr[50][50], bool varr[50][50], int x, int y) {
	int dx, dy;
	int nx, ny;
	queue <pair<int, int>>q;

	q.push(make_pair(x, y));
	varr[x][y] = true;

	while (!q.empty()) {
		dx = q.front().first;
		dy = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			nx = dx + dir[i][0];
			ny = dy + dir[i][1];

			if (nx >= 0 && nx < m && ny >= 0 && ny < n) {
				if (varr[nx][ny] == false && arr[nx][ny] == 1) {
					varr[nx][ny] = true;
					q.push(make_pair(nx, ny));
				}
			}
		}
	}
	return 1;
}
int main(void) {
	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		int place[50][50];
		bool visit[50][50];
		init(place, visit);
		int count = 0;
		cin >> m >> n >> c;
		for (int j = 0; j < c; j++) {
			int x, y;
			cin >> x >> y;
			place[x][y] = 1;
		}
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (visit[i][j] == false && place[i][j] == 1)
					count += bfs(place, visit, i, j);
			}
		}
		cout << count << "\n";
	}
	return 0;
}