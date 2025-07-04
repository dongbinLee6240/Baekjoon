#include <iostream>
#include <vector>
#include <queue>
#include <tuple>

using namespace std;

// ���� �迭(�����¿�)
static int dx[] = { 0, -1, 0, 1, 0, 0 };
static int dy[] = { -1, 0, 1, 0, 0, 0 };
static int dz[] = { 0, 0, 0, 0, 1, -1 };

void bfs(vector<vector<vector<int>>>& graph, vector<vector<vector<bool>>>& visited)
{
	// q�� ���� ���� => q[0] = x y z 
	queue<tuple<int, int, int>> q;
	int H = graph.size();         // ��
	int N = graph[0].size();      // ����
	int M = graph[0][0].size();   // ����


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
	// ���� q���� ���� 1�� ��ǥ�鸸 ���� ���ÿ� bfs�� �����ؼ� ��¥ ����� �ؾ���
	while (!q.empty())
	{
		int size = q.size();
		for (int i = 0; i < size; i++)
		{
			//int x = get<0>(q.front());  //ť q�� �ִ� front ���� x ��ǥ 
			//int y = get<1>(q.front()); //ť q�� �ִ� front ���� y ��ǥ
			//int z = get<2>(q.front()); //ť q�� �ִ� front ���� z ��ǥ

			auto [z,y,x] = q.front();
			q.pop();

			for (int i = 0; i < 6; i++)
			{
				// ���� �¿� 2��for���� ����ϸ� �밢���� ����ϰ� �� 
				int nx = x + dx[i];
				int ny = y + dy[i];
				int nz = z + dz[i];
				//x�� ���� y�� ����
				if (nx < 0 || nx >= M || ny < 0 || ny >= N || nz < 0 || nz >= H)
					continue;

				else
				{
					if (visited[nz][ny][nx] == false && graph[nz][ny][nx] == 0)
					{
						// �����¿찡 0�� ��� �湮���� true, q�� push
						visited[nz][ny][nx] = true;
						//�ʱ� q�� ������ ��ŭ �ݺ��̹Ƿ� ���� �߰��ص� ��q �����ŭ�� �ݺ�
						q.push({ nz,ny,nx }); //�����¿쿡 0�� �ִٸ� ������ q�� ���� ����
					}

					else if (visited[nz][ny][nx] == false && graph[nz][ny][nx] == -1)
					{
						//�����¿찡 -1�� ��� �湮���θ� true
						visited[nz][ny][nx] = true;
					}
				}
			}
		}
		day++;
	}

	//q�� ���� ���� ��� -> -1�� ���� �ִ� ��� or ��� �湮���� ���
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

	int M, N,H; // H: �� m:����(�� ��) n:���� ( �� ��))
	int num;

	cin >> M >> N>>H;
	//vector<vector<int>> map(N, vector<int>(M, 0));
	vector<vector<vector<int>>> map(H,vector<vector<int>>(N,vector<int>(M,0)));
	//vector<vector<bool>> visited(N, vector<bool>(M, false));
	vector<vector<vector<bool>>> visited(H,vector<vector<bool>>(N,vector<bool>(M,false)));

	//���� 2���̸� 2 ex)  5 3 1 - > 5*3�� 2�� 
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