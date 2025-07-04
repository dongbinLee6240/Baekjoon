#include <iostream>
#include <vector>
#include <queue>
#include <tuple>

using namespace std;

// 방향 배열(상하좌우)
static int dx[] = { 0, -1, 0, 1, 0, 0 };
static int dy[] = { -1, 0, 1, 0, 0, 0 };
static int dz[] = { 0, 0, 0, 0, 1, -1 };

void bfs(vector<vector<vector<int>>>& graph, vector<vector<vector<bool>>>& visited)
{
	// q의 형성 조건 => q[0] = x y z 
	queue<tuple<int, int, int>> q;
	int H = graph.size();         // 층
	int N = graph[0].size();      // 세로
	int M = graph[0][0].size();   // 가로


	for (int h = 0; h<H ; h++)
	{
		for (int n = 0; n < N; n++)
		{
			for (int m = 0; m<M; m++)
			{
				if (graph[h][n][m] == 1)
				{
					q.push({h,n,m});
					visited[h][n][m] = true;
				}
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
			//int x = get<0>(q.front());  //큐 q에 있는 front 값의 x 좌표 
			//int y = get<1>(q.front()); //큐 q에 있는 front 값의 y 좌표
			//int z = get<2>(q.front()); //큐 q에 있는 front 값의 z 좌표

			auto [z,y,x] = q.front();
			q.pop();

			for (int i = 0; i < 6; i++)
			{
				// 상하 좌우 2중for문을 사용하면 대각까지 고려하게 됨 
				int nx = x + dx[i];
				int ny = y + dy[i];
				int nz = z + dz[i];
				//x가 가로 y가 세로
				if (nx < 0 || nx >= M || ny < 0 || ny >= N || nz < 0 || nz >= H)
					continue;

				else
				{
					if (visited[nz][ny][nx] == false && graph[nz][ny][nx] == 0)
					{
						// 상하좌우가 0일 경우 방문여부 true, q에 push
						visited[nz][ny][nx] = true;
						//초기 q의 사이즈 만큼 반복이므로 현재 추가해도 전q 사이즈만큼만 반복
						q.push({ nz,ny,nx }); //상하좌우에 0이 있다면 무조건 q에 값이 있음
					}

					else if (visited[nz][ny][nx] == false && graph[nz][ny][nx] == -1)
					{
						//상하좌우가 -1일 경우 방문여부만 true
						visited[nz][ny][nx] = true;
					}
				}
			}
		}
		day++;
	}

	//q에 값이 없을 경우 -> -1에 막혀 있는 경우 or 모두 방문했을 경우
	for (int h = 0; h < H; h++)
	{
		for (int n = 0; n < N; n++)
		{
			for (int m = 0; m < M; m++)
			{
				if (graph[h][n][m] == 0 && visited[h][n][m]==false)
				{
					day = -1;
				}
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

	int M, N,H; // H: 층 m:가로(즉 행) n:세로 ( 즉 열))
	int num;

	cin >> M >> N>>H;
	//vector<vector<int>> map(N, vector<int>(M, 0));
	vector<vector<vector<int>>> map(H,vector<vector<int>>(N,vector<int>(M,0)));
	//vector<vector<bool>> visited(N, vector<bool>(M, false));
	vector<vector<vector<bool>>> visited(H,vector<vector<bool>>(N,vector<bool>(M,false)));

	//층이 2층이면 2 ex)  5 3 1 - > 5*3이 2층 
	for (int i = 0; i < H; i++)
	{
		for (int j = 0; j < N; j++)
		{
			for (int k = 0; k < M; k++)
			{
				cin >> num;
				map[i][j][k] = num;
			}
		}
	}

	bfs(map, visited);

	return 0;
}