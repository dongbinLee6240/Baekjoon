#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int N;
	int sum = 0;
	cin >> N;

	for (int i = 0; i <= N; i++)
	{
		sum += i;
	}

	cout << sum;

	return 0;
}