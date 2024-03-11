#include<iostream>
using namespace std;

int main()
{
	int cnt=0;
	int num[10];
	int rem[42] = { 0, };

	for (int i = 0; i < 10; i++)
	{
		cin >> num[i];

		rem[num[i] % 42]++;
	}
	for (int i = 0; i < 42; i++)
	{
		if (rem[i] != 0)
		{
			cnt++;
		}
	}
	cout << cnt;

	return 0;
}