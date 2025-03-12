#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

// BFS�� ����Ͽ� start���� ��� �������� �ִ� �Ÿ� ���� ����
int bfs(int start, vector<vector<int>>& graph, int N) {
    vector<int> dist(N + 1, -1); // �Ÿ� �迭 (-1�� �ʱ�ȭ)
    queue<int> q;  //�� ť
    q.push(start);  //������ �߰� 
    dist[start] = 0;  //�������� 0

    int sum = 0; // �ִ� �Ÿ� �� ����

    while (!q.empty()) 
    {
        int x = q.front(); //x�� ť�� �Ǿ�(�� ������)
        q.pop();

        for (int y : graph[x]) 
        {
            if (dist[y] == -1) 
            { // ���� �湮 �� �� ���
                dist[y] = dist[x] + 1; // ���� �Ÿ� +1
                sum += dist[y]; // �Ÿ� �ջ�
                q.push(y);
            }
        }
    }

    return sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;

    vector<vector<int>> graph(N + 1);

    // �׷��� �Է�
    for (int i = 0; i < M; i++) 
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    // �� ��忡 ���� BFS ����
    int minBacon = 1e9, person = -1;

    for (int i = 1; i <= N; i++) 
    {
        int baconNumber = bfs(i, graph, N); // i�� ����� �ɺ� ������ �� ���
        if (baconNumber < minBacon) 
        {
            minBacon = baconNumber;
            person = i;
        }
    }

    cout << person << "\n";

    return 0;
}
