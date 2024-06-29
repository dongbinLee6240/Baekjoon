#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	string str;
	int result = 0;
	string num;
	cin >> str;

	str += "-"; //맨 뒤에 - 붙이기
	bool isminus = false;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == '-' || str[i] == '+' || i == str.size())
		{
			if (isminus)
			{
				result -= stoi(num);
				num = "";
			}
			else
			{
				result += stoi(num);
				num = "";
			}
		}

		else
		{
			num += str[i];
		}
		if (str[i] == '-')
		{
			// 식에 -가 하나라도 있으면 
			isminus = true;
		}
	}

	cout << result;

	return 0;
}