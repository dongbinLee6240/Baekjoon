#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> arr;
	int a;
	long long N;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> a;
		arr.push_back(a);
	}

	sort(arr.begin(), arr.end());

	for (const auto& elem : arr)
	{
		cout << elem << '\n';
	}

	return 0;
}