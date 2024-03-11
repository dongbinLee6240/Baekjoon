#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int N;
	vector<int> A;
	vector<int> B;
	int num;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> num;
		A.push_back(num);
	}

	for (int i = 0; i < N; i++)
	{
		cin >> num;
		B.push_back(num);
	}

	sort(A.begin(), A.end());
	sort(B.begin(), B.end(), greater<>());

	int res = 0;
	for (int i = 0; i < N; i++)
	{
		res += A[i] * B[i];
	}

	cout << res;
}