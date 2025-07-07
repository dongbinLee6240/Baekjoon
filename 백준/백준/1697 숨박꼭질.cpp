#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int bfs(int start, int end)
{
    const int MAX = 100001;
    vector<bool> visited(MAX, false);
    queue<pair<int, int>> q;  // {현재 위치, 시간}
    q.push({ start, 0 });
    visited[start] = true;

    while (!q.empty())
    {
        int current = q.front().first;
        int time = q.front().second;
        q.pop();

        if (current == end)
            return time;

        // 이동할 수 있는 경우들
        int next_pos[3] = { current - 1, current + 1, current * 2 };
        for (int i = 0; i < 3; i++)
        {
            int next = next_pos[i];
            if (next >= 0 && next < MAX && !visited[next])
            {
                visited[next] = true;
                q.push({ next, time + 1 });
            }
        }
    }

    return -1; // 도달할 수 없는 경우
}

int main()
{
    int N, K;
    cin >> N >> K;

    int result = bfs(N, K);
    cout << result << '\n';

    return 0;
}
