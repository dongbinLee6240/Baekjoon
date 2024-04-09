#include <iostream>
#include <map>
#include <vector>
#include<algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N;
	map<int, int> map1;
	int M;

	int input1;
	int input2;

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> input1;
		map1[input1] = 1;
	}

	cin >> M;

	for (int i = 0; i < M; i++)
	{
		cin >> input2;

		const auto& it = map1.find(input2);

		if (it != map1.end())
		{
			cout << it->second << '\n';
		}

		else
		{
			cout << "0" << '\n';
		}
	}

	return 0;

}