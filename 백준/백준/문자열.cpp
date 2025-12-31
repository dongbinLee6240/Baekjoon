#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	int T;

	cin >> T;
	string str;

	while (T--)
	{
		cin >> str;
		cout << str[0] << str[str.size()-1] << '\n';
	}
	return 0;
}