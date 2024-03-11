#include <iostream>
using namespace std;

int main()
{
	int num;
	std::cin >> num;

	if (num == 0)
	{
		std::cout << 1;
		return 0;
	}
	long long result = 1;

	for (int i = 1; i <= num; i++)
	{
		result *= i;
	}

	std::cout << result;
}