#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	long long M;
	int x;

	string input = " ";
	int S = 0;

	cin >> M;
	for (int i = 0; i < M; i++)
	{
		cin >> input;

		if (input == "add")
		{
			cin >> x;
			S |= (1 << x);
		}

		else if (input == "remove")
		{
			cin >> x;
			S &= ~(1 << x);
		}

		else if (input == "check")
		{
			cin >> x;

			if (S &= (1 << x))
			{

			}
		}
	}
}