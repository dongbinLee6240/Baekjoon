#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	int num=0;
	int res = 0;
	string name;
	cin >> n;
	cin >> name;
	
	if (name.length() !=n)
	{
		return 0;
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			num = static_cast<int>(name[i]) - 64;
			res += num;
		}

		cout << res;
	}

	return 0;
}