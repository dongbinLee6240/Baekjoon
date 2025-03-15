#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void dfs(int x, int y, vector<vector<int>>& graph, vector<vector<bool>>& visited, int& totalapt)
{
    int n = graph.size();
    visited[x][y] = true;
    totalapt++;

    // �����¿� �̵��� ���� dx, dy �迭
    int dx[4] = { -1, 1, 0, 0 };
    int dy[4] = { 0, 0, -1, 1 };

    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        // ���� üũ + �湮 ���� + ���� �ִ��� Ȯ��
        if (nx >= 0 && nx < n && ny >= 0 && ny < n)
        {
            if (graph[nx][ny] == 1 && !visited[nx][ny])
            {
                dfs(nx, ny, graph, visited, totalapt);
            }
        }
    }
}

int main()
{
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;

    vector<vector<int>> map(N, vector<int>(N, 0));
    vector<vector<bool>> visited(N, vector<bool>(N, false));
    vector<int> housecounts;

    for (int i = 0; i < N; i++)
    {
        string row;
        cin >> row;
        for (int j = 0; j < N; j++)
        {
            map[i][j] = row[j] - '0'; // ���ڿ��� ���ڷ� ��ȯ
        }
    }

    int danji = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (map[i][j] == 1 && !visited[i][j])
            {
                int totalapt = 0;
                dfs(i, j, map, visited, totalapt);
                housecounts.push_back(totalapt);
                danji++;
            }
        }
    }

    // �������� ����
    sort(housecounts.begin(), housecounts.end());

    // ��� ���
    cout << danji << "\n";
    for (int count : housecounts)
    {
        cout << count << "\n";
    }

    return 0;
}
