#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

using namespace std;

int arr[100][100];
bool visit[100][100];
int n, m, k;
int dir[4][2] = { {1,0},{-1,0},{0,1}, {0,-1} };

int dfs(int x, int y) {
	int nx, ny;
	int size = 1;
	visit[x][y] = true;
	for (int i = 0; i < 4; i++) {
		nx = x + dir[i][0];
		ny = y + dir[i][1];
		printf("%d\n", visit[nx][ny]);
		if (nx >= 0 && nx < m && ny >= 0 && ny < n) {
			if (visit[x][y] == false && arr[nx][ny] == 1) {
				size += dfs(nx, ny);
			}
		}
	}
	return size;
}

int main(void) {
	scanf("%d %d %d", &n, &m, &k);
	while (k--) {
		int x, y;
		scanf("%d %d", &x, &y);
		arr[x - 1][y - 1] = 1;
	}
	int max = 0; int size;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[i][j] == 1 && visit[i][j] == false) {
				size = dfs(i, j);
				if (size > max)
					max = size;
			}
		}
	}
	printf("%d\n", max);
	return 0;
}