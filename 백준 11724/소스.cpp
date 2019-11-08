#include <iostream>
#include <vector>
using namespace std;

vector<int>node[1001];
bool check[1001];

void dfs(int a) {
	check[a] = true;
	for (int i = 0; i < node[a].size(); i++) {
		if (check[node[a][i]] == false) {
			dfs(node[a][i]);
		}
	}
}
int main(void) {
	int n; int m;
	scanf("%d %d", &n, &m);

	for (int i = 0; i < m; i++) {
		int u; int v;
		scanf("%d %d", &u, &v);
		node[u].push_back(v);
		node[v].push_back(u);
	}
	int count = 0;
	for (int i = 1; i <= n; i++) {
		if (check[i] == false) {
			dfs(i);
			count++;
		}
	}
	printf("%d", count);
	return 0;
}