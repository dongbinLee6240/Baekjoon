#include<iostream>
#include<vector>
#include<queue>
#include<map>
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
	int N, M;

    cin >> N >> M;


}