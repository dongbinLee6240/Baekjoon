#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int N;

	cin >> N;
	vector<string> quiz(N);
	vector<int>results;
	for (int i = 0; i < N; i++)
	{
		cin >> quiz[i];
	}

	for (int i = 0; i < N; i++)
	{
		int score = 0;
		int total = 0;
		for (int j = 0; j < quiz[i].size(); j++)
		{
			if (quiz[i][j] == 'O')
			{
				score++; //1 2 3
				total += score; //1 + 2 + 3
			}
			else
			{
				score=0;
			}
		}
		results.push_back(total);
	}

	for (int i = 0; i < N; i++)
	{
		cout << results[i] << '\n';
	}

	return 0;
}