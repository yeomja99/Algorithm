#include <iostream>
#include <queue>
#include <cstdio>

using namespace std;

int n;
char arr[100][100];
bool visit[100][100];
int dir[4][2] = { {1,0},{-1,0},{0,-1},{0,1} };

void init(bool visit[100][100]) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			visit[i][j] = false;
		}
	}
}

int bfs(int x, int y) {
	int dx, dy;
	int nx, ny;
	char c;
	queue<pair<int, int>>q;
	q.push(make_pair(x, y));
	visit[x][y] = true;
	c = arr[x][y];
	while (!q.empty()) {
		dx = q.front().first;
		dy = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			nx = dx + dir[i][0];
			ny = dy + dir[i][1];
			if (nx >= 0 && nx < n && ny >= 0 && ny < n) {
				if (visit[nx][ny] == false && arr[nx][ny] == c) {
					visit[nx][ny] = true;
					q.push(make_pair(nx, ny));
				}
			}
		}
	}
	return 1;
}

int main(void) {
	cin >> n;
	int count = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (visit[i][j] == false)
				count += bfs(i, j);
		}
	}

	init(visit);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[i][j] == 'G')
				arr[i][j] = 'R';
		}
	}
	int ncount = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (visit[i][j] == false)
				ncount += bfs(i, j);
		}
	}

	cout << count << " " << ncount << "\n";
}