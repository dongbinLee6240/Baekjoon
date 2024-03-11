#include <iostream>
#include <cmath> 

using namespace std;

class Pos
{
public:
	int startx;
	int starty;
	int endx;
	int endy;
};

class Planet
{
public:
	int x_pos[50];
	int y_pos[50];
	int r[50];
};

int main()
{
	Planet planet;
	Pos pos;

	int N = 0;
	int M = 0;

	int enter = 0;
	int out = 0;

	int sdistance=0;
	int edistance=0;

	cin >> N;

	while(N--)
	{
		cin >> pos.startx >> pos.starty >> pos.endx >> pos.endy;
		cin >> M;

		enter = 0;
		out = 0;

		for (int i = 0; i < M; i++)
		{
			cin >> planet.x_pos[i] >> planet.y_pos[i] >> planet.r[i];

			sdistance = sqrt(pow(pos.startx - planet.x_pos[i],2) + pow(pos.starty - planet.y_pos[i],2));
			edistance = sqrt(pow(pos.endx - planet.x_pos[i],2) + pow(pos.endy - planet.y_pos[i],2));

			if (sdistance < planet.r[i])
			{
				if (edistance > planet.r[i])
				{
					out++;
				}
			}

			if (sdistance > planet.r[i])
			{
				if (edistance < planet.r[i])
				{
					enter++;
				}
			}
		}

		cout << enter+out << '\n';

		
	}
}