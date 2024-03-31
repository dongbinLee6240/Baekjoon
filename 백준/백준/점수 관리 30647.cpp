#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

class Player
{
public:
	int rank[1000];
	string name[1000];
	int score[1000];
	int isHidden[1000];
};

bool desc(int a, int b) 
{
	return a > b;
}

int main()
{
	int N=0;
	int top;
	Player player;

	cin >> N;

	for (int i = 0; i < N; i++)		
	{
		if (i == 0)
		{
			std::cout << "[{""name"":"; cin >> player.name[i]; cout << ","; std::cout << """score"":"; cin >> player.score[i]; cout << ",";std::cout << """isHidden"":"; cin >> player.isHidden[i]; cout << "},";
		}
		else if (i == N - 1)
		{
			std::cout << "{""name"":"; cin >> player.name[i]; cout << ",";
			std::cout << """score"":"; cin >> player.score[i]; cout << ",";
			std::cout << """isHidden"":"; cin >> player.isHidden[i]; cout << "}]";
		}
		else
		{
			std::cout << "{""name"":"; cin >> player.name[i]; cout << ",";
			std::cout << """score"":"; cin >> player.score[i]; cout << ",";
			std::cout << """isHidden"":"; cin >> player.isHidden[i]; cout << "},";
		}

	}

	sort(player.score, player.score + N,desc);

	for (int i = 0; i < N; i++)
	{
		player.rank[i] = i;
		if (player.score[i] == player.score[i + 1])
		{
			player.rank[i + 1] = player.rank[i];
		}
	}
	for (int i = 0; i < N; i++)
	{
		if (player.isHidden[i] == 1)
		{
			cout << player.name[i] << player.score[i] << '\n';
		}
	}

	return 0;
}