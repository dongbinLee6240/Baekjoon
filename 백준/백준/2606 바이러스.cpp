#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int bfs(int start, vector<vector<int>>& graph, vector<bool>& visited)
{
    int count = 0;
    queue<int> q;
    q.push(start);
    visited[start] = true;
    while (!q.empty())
    {
        int x = q.front();
        q.pop();
        count += 1;

        for (int i = 0; i < graph[x].size(); i++)
        {
            int y = graph[x][i];
            if (visited[y] == false)
            {
                q.push(y);
                visited[y] = true;
            }
        }
    }

    return count;
}

int main()
{
    int V; // 정점의 수
    cin >> V;
    int E; // 간선의 수
    cin >> E;

    vector<vector<int>> graph(V + 1); // 1-based index
    vector<bool> visited(V + 1, false); // 1-based index

    for (int i = 0; i < E; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    int res = bfs(1, graph, visited); // BFS 시작 정점을 1로 설정
    cout << res - 1 << endl;

    return 0;
}