#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

// BFS�� ����Ͽ� start���� ��� �������� �ִ� �Ÿ� ���� ����
void bfs(int start, vector<vector<int>>& graph,vector<vector<int>>& reachable,int N)
{
    vector<bool>visited(N + 1, false);
    queue<int> q;  //�� ť
    q.push(start);  //������ �߰� 
    visited[start]=false;  //�������� 0

    int sum = 0; // �ִ� �Ÿ� �� ����

    while (!q.empty())
    {
        int x = q.front(); //x�� ť�� �Ǿ�(�� ������)
        q.pop();

        for (int y : graph[x]) //ex graph[4]�� y�� 5,6
        {
            if (!visited[y])  //dist[5]
            { // ���� �湮 �� �� ���
                visited[y]=true; // ���� �Ÿ� +1 dist[x]=0��
                q.push(y);
                reachable[start][y] = 1;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    vector<vector<int>> graph(N+1);  //
    vector<vector<int>> reachable(N + 1, vector<int>(N + 1, 0));
    // �׷��� �Է�
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            int u=-1; //�⺻�� -1
            cin >> u; 
            if (u == 1)
            {
                graph[i].push_back(j); //���� �׷��� graph[4]={5,6}
            }
            
        }
    }

    /*for (int i = 1; i <= N; i++)
    {
        for (int y : graph[i])
        {
            cout << i << y << '\n';
        }
    }*/
    for (int i = 1; i <= N; i++)
    {
        bfs(i, graph, reachable, N);
    }
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            cout << reachable[i][j] << " ";
            
        }
        cout << '\n';
    }
    return 0;
}
