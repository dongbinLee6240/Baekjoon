#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{

	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N;
	
	cin >> N;
	vector<string> str(N, " ");

	for (int i = 0; i < N; i++)
	{
		str.push_back("*");
		str.erase(str.begin());
		for (auto it : str)
		{
			cout << it;

		}
		cout << '\n';
	}

	return 0;
}