#include<iostream>
#include<map>
#include<string>
#include <cctype>
#include <algorithm>

using namespace std;

int main()
{

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	int M;

	string input;

	map<string, int>words;

	cin >> N >> M;

	for (int i = 1; i <= N; i++)
	{
		cin >> input;
		words[input] = i;
	}

	for (int i = 0; i < M; i++)
	{
		cin >> input;

		if (isdigit(input[0]) && stoi(input) <=26)  //숫자인 경우
		{
			int num = stoi(input);
			for (const auto& word : words)
			{
				if (word.second == num)
				{
					cout << word.first << '\n';
					break;
				}
			}
		}

		else
		{
			auto it1 = words.find(input);

			cout << it1->second << '\n';
		}
	}

	return 0;

}