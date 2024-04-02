#include <iostream>

using namespace std;

int main()
{

	int N;
	int n=0;

	cin >> N;

	if (N % 5 == 0)
	{
		cout << N / 5;
		return 0;
	}

	while (N > 0)
	{
		N -= 3;
		n += 1;

		if (N % 5 == 0)  //N이 3과 5의 조합
		{
			cout << n + (N / 5);
			break;
		}

		else if (N == 1 || N == 2)  //-1일경우
		{
			cout << "-1";
			break;
		}

		else if (N == 0) //N이 3의 배수일 경우
		{
			cout << n;
			break;
		}
	}

	return 0;
}