#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N;
	int P[1000];

	int total = 0;
	int sum = 0;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> P[i];
	}
	cout << '\n';

	sort(P, P + N);

	for (int i = 0; i < N; i++)
	{
		sum += P[i];
		total += sum;
	}

	cout << total;

	return 0;
}