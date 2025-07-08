#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;

void dfs(int start, vector<vector<int>>& graph, vector<bool>& visited)
{
    visited[start] = true;

    for (int i = 0; i < graph[start].size(); i++)
    {
        int y = graph[start][i];
        if (!visited[y])
        {
            dfs(y, graph, visited);
        }
    }
}

int main()
{
    cin.tie(0); cout.tie(0);
    ios::sync_with_stdio(false);

    int N, M;
    cin >> N >> M;

    vector<vector<int>> graph(N + 1);
    vector<bool> visited(N + 1, false);

    int u, v;
    for (int i = 0; i < M; i++)
    {
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    // 인접 리스트 정렬 (작은 순서대로 방문하기 위해)
    for (int i = 1; i <= N; i++)
    {
        sort(graph[i].begin(), graph[i].end());
    }

    // 연결된 간선 수가 가장 적은 노드 선택
    int start = 1;
    int min_degree = 1e9;
    for (int i = 1; i <= N; i++)
    {
        if (graph[i].size() < min_degree && graph[i].size() > 0)
        {
            min_degree = graph[i].size();
            start = i;
        }
    }

    int ConnectedComponents = 0;

    for (int i = 1; i <= N; i++)
    {
        if (!visited[i]) {
            dfs(i, graph, visited);
            ConnectedComponents ++;
        }
    }

    cout << ConnectedComponents;
    return 0;
}
