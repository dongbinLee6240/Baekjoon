#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int Heru=0;
	int Ausar=0;
	int Auset=0;

	while (1)
	{
		cin >> Heru >> Ausar >> Auset;

		if (Heru > Ausar && Heru > Auset)
		{
			if (pow(Heru, 2) == pow(Ausar, 2) + pow(Auset, 2))
			{
				cout << "right" << '\n';
			}
			else
			{
				cout << "wrong" << '\n';
			}
		}

		else if (Ausar > Heru && Ausar > Auset)
		{
			if (pow(Ausar, 2) == pow(Heru, 2) + pow(Auset, 2))
			{
				cout << "right" << '\n';
			}
			else
			{
				cout << "wrong" << '\n';
			}

		}

		else if (Auset > Heru && Auset > Ausar)
		{
			if (pow(Auset, 2) == pow(Heru, 2) + pow(Ausar, 2))
			{
				cout << "right" << '\n';
			}
			else
			{
				cout << "wrong" << '\n';
			}

		}
		
		if (Auset == 0 && Heru == 0 && Ausar == 0)
		{
			break;
		}

	}

	return 0;
}