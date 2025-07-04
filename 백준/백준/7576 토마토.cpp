#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// 방향 배열(상하좌우)
static int dy[] = { -1, 0, 1, 0 };
static int dx[] = { 0, -1, 0, 1 };

void bfs(vector<vector<int>>& graph, vector<vector<bool>>& visited)
{
	queue<pair<int, int>> q;
	int N = graph.size(); //세로 
	int M = graph[0].size(); //가로

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (graph[i][j] == 1)
			{
				q.push({ i,j });
				visited[i][j] = true;
			}
		}
	}

	int day = -1;
	// 현재 q에는 값이 1인 좌표들만 존재 동시에 bfs를 실행해서 날짜 계산을 해야함
	while (!q.empty())
	{
		int size = q.size();
		for (int i = 0; i < size; i++)
		{
			int x = q.front().first;  //큐 q에 있는 front 값의 x 좌표 
		    int y = q.front().second; //큐 q에 있는 front 값의 y 좌표
		    q.pop();

			for (int i = 0; i < 4; i++)
			{
				// 상하 좌우 2중for문을 사용하면 대각까지 고려하게 됨 
				int nx = x + dx[i];
				int ny = y + dy[i];
				//x가 가로 y가 세로
				if (nx < 0 || nx >= N || ny >= M || ny < 0)
				{
					continue;
				}

				else
				{
					if (visited[nx][ny] == false && graph[nx][ny] == 0)
					{
						// 상하좌우가 0일 경우 방문여부 true, q에 push
						visited[nx][ny] = true;
						//초기 q의 사이즈 만큼 반복이므로 현재 추가해도 전q 사이즈만큼만 반복
						q.push({ nx,ny }); //상하좌우에 0이 있다면 무조건 q에 값이 있음
					}

					else if (visited[nx][ny] == false && graph[nx][ny] == -1)
					{
						//상하좌우가 -1일 경우 방문여부만 true
						visited[nx][ny] = true;
					}
				}
			}
		}
		day++;
	}

	//q에 값이 없을 경우 -> -1에 막혀 있는 경우 or 모두 방문했을 경우
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			//만약 방문칸 값이 -1일 경우 그 곳도 false이므로 
			if (visited[i][j] == false&&graph[i][j]==0)
			{
				day = -1;
			}
		}
	}

	cout << day;

	return;
}

int main()
{
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);

	int M, N;
	int num;

	cin >> M >> N;
	vector<vector<int>> map(N, vector<int>(M, 0));
	vector<vector<bool>> visited(N, vector<bool>(M, false));

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> num;
			map[i][j] = num;
		}
	}

	bfs(map, visited);

	return 0;
}