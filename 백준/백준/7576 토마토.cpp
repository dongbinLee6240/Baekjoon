#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// ���� �迭(�����¿�)
static int dy[] = { -1, 0, 1, 0 };
static int dx[] = { 0, -1, 0, 1 };

void bfs(vector<vector<int>>& graph, vector<vector<bool>>& visited)
{
	queue<pair<int, int>> q;
	int N = graph.size(); //���� 
	int M = graph[0].size(); //����

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
	// ���� q���� ���� 1�� ��ǥ�鸸 ���� ���ÿ� bfs�� �����ؼ� ��¥ ����� �ؾ���
	while (!q.empty())
	{
		int size = q.size();
		for (int i = 0; i < size; i++)
		{
			int x = q.front().first;  //ť q�� �ִ� front ���� x ��ǥ 
		    int y = q.front().second; //ť q�� �ִ� front ���� y ��ǥ
		    q.pop();

			for (int i = 0; i < 4; i++)
			{
				// ���� �¿� 2��for���� ����ϸ� �밢���� ����ϰ� �� 
				int nx = x + dx[i];
				int ny = y + dy[i];
				//x�� ���� y�� ����
				if (nx < 0 || nx >= N || ny >= M || ny < 0)
				{
					continue;
				}

				else
				{
					if (visited[nx][ny] == false && graph[nx][ny] == 0)
					{
						// �����¿찡 0�� ��� �湮���� true, q�� push
						visited[nx][ny] = true;
						//�ʱ� q�� ������ ��ŭ �ݺ��̹Ƿ� ���� �߰��ص� ��q �����ŭ�� �ݺ�
						q.push({ nx,ny }); //�����¿쿡 0�� �ִٸ� ������ q�� ���� ����
					}

					else if (visited[nx][ny] == false && graph[nx][ny] == -1)
					{
						//�����¿찡 -1�� ��� �湮���θ� true
						visited[nx][ny] = true;
					}
				}
			}
		}
		day++;
	}

	//q�� ���� ���� ��� -> -1�� ���� �ִ� ��� or ��� �湮���� ���
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			//���� �湮ĭ ���� -1�� ��� �� ���� false�̹Ƿ� 
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