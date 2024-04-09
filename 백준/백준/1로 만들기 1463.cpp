#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int x;
	int cnt = 0;

	cin >> x;

	while (x != 1)
	{

		if (x % 3 == 0)
		{
			x = x / 3;
			cnt += 1;
		}

		else if ((x - 1) % 3 == 0)
		{
			x -= 1;
			cnt += 1;
		}

		else if (x % 2 == 0)
		{
			x = x / 2;
			cnt += 1;
		}

		else
		{
			x -= 1;
			cnt += 1;
		}


		if (x == 1)
		{
			break;
		}
	}
	cout << cnt;

	return 0;
}