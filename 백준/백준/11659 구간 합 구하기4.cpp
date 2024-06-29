#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N;
	int M;
	cin >> N >> M;

	vector<int> arr(N + 1, 0);
	vector<int> sumlist(N + 1, 0);

	for (int i = 1; i <= N; i++)
	{
		cin >> arr[i];
		sumlist[i] = sumlist[i - 1] + arr[i];
	}

	for (int i = 0; i < M; i++)
	{
		int start = 0;
		int end = 0;
		int res = 0;
		cin >> start >> end;
		res = sumlist[end] - sumlist[start - 1];
		cout << res << '\n';
	}

	return 0;
}