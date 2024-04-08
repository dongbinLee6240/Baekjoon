#include <iostream>

using namespace std;

int gcd(int a, int b)
{
	int c;
	while (b != 0)
	{
		c = a % b;  //c는 a를 b로 나눈 나머지
		a = b;  //a=b
		b = c;  //b=c  //b가 0이 될때까지 반복
	}
	return a;
}

int lcm(int a, int b)
{
	return a * b / gcd(a, b);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N;
	int M;

	int max;
	int max2;

	cin >> N >> M;

	cout << gcd(N,M) << '\n';
	cout << lcm(N,M) << '\n';

	return 0;
}