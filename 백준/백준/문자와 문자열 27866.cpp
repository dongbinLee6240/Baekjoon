#include <iostream>
#include <string>

using namespace std;

int main()
{
	string input;
	int index;

	cin >> input;
	cin >> index;

	cout << input[index-1];

	return 0;
}