#include<iostream>
#include<math.h>
using namespace std;

void cantor(int N)
{
	int size = pow(3, N - 1);

	if (N == 0)
	{
		cout << "-";
	}

	cantor(N - 1);
	for (int i= 0; i <size; i++ )
	{
		cout << " ";
	}
	cantor(N - 1);
}

int main()
{
	int N;
	while (cin >> N)
	{
		cantor(N);
		cout << "\0";
	}
	return 0;
}