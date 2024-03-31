#include <iostream>
#include <string>
using namespace std;

int main()
{
	int N;
	string num;
	int sum=0;
	int arr[100];

	cin >> N;
	cin >> num;
	for (int i = 0; i < num.size(); i++)
	{
		arr[i] = num[i] -48; //아스키 코드 값을 빼줘야함
	}

	for (int i = 0; i < num.size(); i++)
	{
		sum += arr[i]; 
	}

	cout << sum;

	return 0;
}