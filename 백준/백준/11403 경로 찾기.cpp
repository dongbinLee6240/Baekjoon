#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

// BFS를 사용하여 start에서 모든 노드까지의 최단 거리 합을 구함
void bfs(int start, vector<vector<int>>& graph,vector<vector<int>>& reachable,int N)
{
    vector<bool>visited(N + 1, false);
    queue<int> q;  //빈 큐
    q.push(start);  //시작점 추가 
    visited[start]=false;  //시작점은 0

    int sum = 0; // 최단 거리 합 저장

    while (!q.empty())
    {
        int x = q.front(); //x를 큐의 맨앞(즉 시작점)
        q.pop();

        for (int y : graph[x]) //ex graph[4]의 y들 5,6
        {
            if (!visited[y])  //dist[5]
            { // 아직 방문 안 한 경우
                visited[y]=true; // 이전 거리 +1 dist[x]=0임
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
    // 그래프 입력
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            int u=-1; //기본은 -1
            cin >> u; 
            if (u == 1)
            {
                graph[i].push_back(j); //방향 그래프 graph[4]={5,6}
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
