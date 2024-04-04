#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <set>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	pair<string, int>input;
	set<int>S;

	long long M;

	cin >> M;

	for (int i = 0; i < M; i++)
	{
		cin >> input.first;

		if (input.first == "add")  //추가 
		{
			scanf("%d", &input.second);

			if (input.second >= 1 && input.second <= 20)
			{
				S.insert(input.second);
			}
			else break;
		}

		else if (input.first == "remove")  //삭제
		{
			scanf("%d",&input.second);
			if (input.second >= 1 && input.second <= 20)
			{
				S.erase(input.second);
			}
			else break;
		}

		else if (input.first == "check")
		{
			scanf("%d", &input.second);

			if (input.second >= 1 && input.second <= 20)
			{
				if (S.find(input.second) != S.end())
				{
					printf("1\n");
				}
				else
				{
					printf("0\n");
				}
			}

			else break;
			
		}

		else if (input.first == "toggle")
		{
			scanf("%d", &input.second);

			if (input.second >= 1 && input.second <= 20)
			{
				if (S.find(input.second) != S.end())
				{
					S.erase(input.second);
				}

				else
				{
					S.insert(input.second);
				}
			}

			else break;
			
		}

		else if (input.first == "all")
		{
			S.clear();

			for (int j = 1; j <= 20; j++)
			{
				S.insert(j);
			}
		}

		else if (input.first == "empty")
		{
			S.clear();
		}
	}

	return 0;
}