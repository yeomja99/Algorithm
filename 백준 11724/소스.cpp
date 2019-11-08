#include <iostream>
#include <vector>
using namespace std;

bool visit[1001];
vector <int> edge[1001];

int dfs(int v) {
	visit[v] = true;

	for (int i = 0; i < edge[v].size(); i++) {
		if (visit[edge[v][i]] == false)
			dfs(edge[v][i]);
	}

	return 1;
}
int main(void) {
	int n, m;
	scanf("%d %d", &n, &m);

	for (int i = 0; i < m; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		edge[a].push_back(b);
		edge[b].push_back(a);
	}
	int count = 0;
	for (int i = 1; i <= n; i++) {
		if (visit[i] == false)
			count += dfs(i);

	}

	printf("%d", count);

	return 0;

}