#include <iostream>
#include <vector>
#include <queue>

using namespace std;

static int dy[] = { -1, 0, 1, 0 };
static int dx[] = { 0, -1, 0, 1 };

void bfs(vector<vector<int>>& graph, int ey, int ex)
{
	int n = graph.size();
	int m = graph[0].size();

	vector<vector<int>> dist(n, vector<int>(m, -1));  // 초기 -1로 설정
	vector<vector<bool>> visited(n, vector<bool>(m, false));

	queue<pair<int, int>> q;
	q.push({ ey, ex });
	visited[ey][ex] = true;
	dist[ey][ex] = 0;

	while (!q.empty())
	{
		auto [y, x] = q.front();
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int ny = y + dy[i];
			int nx = x + dx[i];

			if (ny < 0 || ny >= n || nx < 0 || nx >= m)
				continue;

			if (!visited[ny][nx] && graph[ny][nx] == 1)
			{
				visited[ny][nx] = true;
				dist[ny][nx] = dist[y][x] + 1;
				q.push({ ny, nx });
			}
		}
	}

	// 출력 처리
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (graph[i][j] == 0)
				cout << 0 << " ";
			else
				cout << dist[i][j] << " ";
		}
		cout << '\n';
	}
}

int main()
{
	int n, m;
	cin >> n >> m;

	vector<vector<int>> map(n, vector<int>(m));
	int ex = -1, ey = -1;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> map[i][j];
			if (map[i][j] == 2)
			{
				ey = i;
				ex = j;
			}
		}
	}

	bfs(map, ey, ex);
}
