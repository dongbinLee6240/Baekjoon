#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

// BFS를 사용하여 start에서 모든 노드까지의 최단 거리 합을 구함
int bfs(int start, vector<vector<int>>& graph, int N) {
    vector<int> dist(N + 1, -1); // 거리 배열 (-1로 초기화)
    queue<int> q;  //빈 큐
    q.push(start);  //시작점 추가 
    dist[start] = 0;  //시작점은 0

    int sum = 0; // 최단 거리 합 저장

    while (!q.empty()) 
    {
        int x = q.front(); //x를 큐의 맨앞(즉 시작점)
        q.pop();

        for (int y : graph[x]) 
        {
            if (dist[y] == -1) 
            { // 아직 방문 안 한 경우
                dist[y] = dist[x] + 1; // 이전 거리 +1
                sum += dist[y]; // 거리 합산
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

    // 그래프 입력
    for (int i = 0; i < M; i++) 
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    // 각 노드에 대해 BFS 실행
    int minBacon = 1e9, person = -1;

    for (int i = 1; i <= N; i++) 
    {
        int baconNumber = bfs(i, graph, N); // i번 노드의 케빈 베이컨 수 계산
        if (baconNumber < minBacon) 
        {
            minBacon = baconNumber;
            person = i;
        }
    }

    cout << person << "\n";

    return 0;
}
