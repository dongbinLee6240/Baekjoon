#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int k, d1, d2;
	int res;
	float answer;

	cout.precision(5);

	cin >> k;
	cin >> d1 >> d2;

	res = pow(k, 2);

	if (d1 == d2)
	{
		cout << res;
	}

	else if (d1 > d2)
	{
		answer = res - pow((d1 / 2 - d2 / 2), 2);
		cout << answer;
	}
	else if (d2 > d1)
	{
		answer = res - (d2 / 2 - d1 / 2) * (d2 / 2 - d1 / 2);
		cout << answer;
	}
}