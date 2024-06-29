#include <iostream>
#include <vector>
#include <queue>

using namespace std;

static int N,M;
static int res = 0;
static char map[601][601]; // map 정보
static bool visited[601][601] = { false, }; // 방문 여부 체크
static pair<int, int> I_pos; // 도연이 위치

// 방향 배열(상하좌우)
static int dy[] = { -1, 0, 1, 0 };
static int dx[] = { 0, -1, 0, 1 };

void bfs()
{
	queue <pair<int, int>> q;

	q.push(I_pos);
	visited[I_pos.first][I_pos.second] = true;

	while (!q.empty())
	{
		pair<int, int> x = q.front();
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			pair<int, int> next = { x.first + dx[i],x.second + dy[i] };

			//권외
			if (next.first < 0 || next.first >= N || next.second < 0 || next.second >= M) continue;
			if (map[next.first][next.second] == 'X')continue;
			if (visited[next.first][next.second] == true)continue;
			if (map[next.first][next.second] == 'P')
			{
				res += 1;
			}
			if (map[next.first][next.second] == 'O' || map[next.first][next.second] == 'P')
			{
				q.push(next);
				visited[next.first][next.second] = true;
			}
			
		}

	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> N >> M;
	
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin>> map[i][j];
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (map[i][j] == 'I')
			{
				I_pos.first = i;
				I_pos.second = j;
			}
			
		}
	}

	bfs();

	if (res == 0)
	{
		cout << "TT";
	}
	else
	{
		cout << res;
	}
	return 0;
}