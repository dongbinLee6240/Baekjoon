#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N;
	static char map[128][128];
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			cin >> map[i][j];
		}
	}
}