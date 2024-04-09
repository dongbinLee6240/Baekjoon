#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int factorial(int A)
{
	if (A == 1 || A==0)
	{
		return 1;
	}

	else
	{
		return A * factorial(A - 1);
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N, K;

	scanf("%d", &N);
	scanf("%d", &K);

	cout << factorial(N) / (factorial(K) * factorial(N - K));

	return 0;

}