#include <iostream>
using namespace std;

int main()
{
	long long A, B, C;

	cin >> A >> B >> C;
	
	if (A < 0 || B < 0 || C < 0)
	{
		return 0;
	}

	cout << A + B + C;

	return 0;
}