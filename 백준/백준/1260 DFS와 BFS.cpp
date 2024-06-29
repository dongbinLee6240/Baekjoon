#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(int a, int b)
{
	return a < b;
}
void bfs(int start, vector<vector<int>>& graph, vector<bool>& visited)
{
	queue<int> q;
	q.push(start);
	visited[start] = true;

	while (!q.empty())
	{
		int x = q.front();
		q.pop();
		visited[x] = true;
		cout << x << " ";

		for (int i = 0; i < graph[x].size(); i++)
		{
			int y = graph[x][i];

			if (visited[y] == false)
			{
				visited[y] = true;
				q.push(y);
			}
		}

	}
	cout << " ";
}

void dfs(int x, vector<vector<int>>& graph, vector<bool>& visited)
{
	visited[x] = true;
	cout << x << " ";

	for (int i = 0; i < graph[x].size(); i++)
	{
		int y = graph[x][i];
		if (visited[y] == false)
		{
			dfs(y, graph, visited);
		}
	}

}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int E;
	int V;
	int start;
	cin >> E >> V >> start;
	vector<bool> visited1(E + 1, false);
	vector<bool> visited2(E + 1, false);
	vector<vector<int>> graph(E + 1);

	for (int i = 0; i < V; i++)
	{
		int u, v;
		cin >> u >> v;
		graph[u].push_back(v);
		graph[v].push_back(u);

	}

	for (int i = 0; i <= E; i++)
	{
		sort(graph[i].begin(), graph[i].end(), compare);
	}

	dfs(start, graph, visited1);
	cout << endl;
	bfs(start, graph, visited2);

	return 0;
}