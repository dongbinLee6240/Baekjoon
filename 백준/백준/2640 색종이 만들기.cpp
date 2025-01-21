#include <iostream>
#include <vector>
using namespace std;

static int blue = 0;
static int white = 0;
void recur(const vector<vector<int>>& map, int x, int y, int size);

int main()
{
    int N;
    cin >> N;
    vector<vector<int>> map(N, vector<int>(N)); // 0-based indexing
    for (int i = 0; i < N; i++) // 수정: 1-based -> 0-based
    {
        for (int j = 0; j < N; j++) // 수정: 1-based -> 0-based
        {
            cin >> map[i][j];
        }
    }

    recur(map, 0, 0, N); // 수정: 1-based -> 0-based

    cout << white << '\n';
    cout << blue << '\n';
    return 0;
}

void recur(const vector<vector<int>>& map, int x, int y, int size)
{
    int first = map[x][y];
    bool match = true;

    for (int i = x; i < x + size; i++) // 수정: x부터 x+size까지 검사
    {
        for (int j = y; j < y + size; j++) // 수정: y부터 y+size까지 검사
        {
            if (map[i][j] != first)
            {
                match = false;
                break;
            }
        }
        if (!match) break;
    }

    if (match == true)
    {
        if (first == 1)
        {
            blue += 1;
        }
        else
            white += 1;
    }
    else
    {
        int newSize = size / 2;
        recur(map, x, y, newSize);
        recur(map, x + newSize, y, newSize);
        recur(map, x, y + newSize, newSize);
        recur(map, x + newSize, y + newSize, newSize);
    }
}
