#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);

	int T;
	int A;
	int B;

	cin >> T;

	while (T--)
	{
		cin >> A >> B;
		cout << A + B << '\n';
	}
	return 0;
}