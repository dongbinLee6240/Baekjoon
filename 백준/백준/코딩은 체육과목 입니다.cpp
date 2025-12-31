#include<iostream>
#include<string>

using namespace std;

int main()
{
	int N;
	int m;
	cin >> N;

	m = N / 4;
	string lng = "long ";
	string res;
	for (int i = 0; i < m; i++)
	{
		res += lng;
	}

	cout << res + "int";

	return 0;
}