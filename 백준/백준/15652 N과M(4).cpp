#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

static int N;
static int M;

static vector<int> arr(9, 0);
static vector<bool> visited(9, false);

void dfs(int n, int cnt)
{
	//Ãâ·Â
	if (cnt == M)
	{
		for (int i = 0; i < M; i++)
		{
			cout << arr[i] << " ";
		}
		cout << '\n';
	}

	else
	{
		//dfs(1,0) -> dfs(2,1) -> ex) 4 2
		//dfs(2,1) -> dfs(2,2)
		//dfs(3,1) -> dfs(3,2)
		
		for (int i = n; i <= N; i++)
		{
			if (visited[i] == false)
			{
				visited[i] = true;
				arr[cnt] = i;
				dfs(i+1, cnt + 1);
				visited[i] = false;
			}
		}
	}
}

int main()
{
	cin >> N >> M;
	dfs(1, 0);

	return 0;
}