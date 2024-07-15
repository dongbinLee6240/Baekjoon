#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int arr[5] = { 0, };
	int res = 0;
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];	
	}

	for (int i = 0; i < 5; i++)
	{
		res += pow(arr[i], 2);
	}

	cout << res % 10;
	return 0;
}