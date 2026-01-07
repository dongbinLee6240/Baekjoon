#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int compare(int a, int b)
{
	if (a < b)
	{
		return b;
	}
	else
		return a;
}

int main()
{
	string num1;
	string num2;

	int a;
	int b;

	cin >> num1 >> num2;

	reverse(num1.begin(), num1.end());
	reverse(num2.begin(), num2.end());

	a = stoi(num1);
	b = stoi(num2);

	cout << compare(a, b);

	return 0;
}