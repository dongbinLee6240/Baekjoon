#include<iostream>
#include<string>

using namespace std;

int main()
{
	int T;

	cin >> T;
	int A;
	int B;
	int cnt = 1;

	while (T--)
	{
		cin >> A >> B;
		cout << "Case #" << cnt << ": " << A + B << '\n';
		cnt++;
	}

	return 0;
}