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
		arr[i] = num[i] -48; //�ƽ�Ű �ڵ� ���� �������
	}

	for (int i = 0; i < num.size(); i++)
	{
		sum += arr[i]; 
	}

	cout << sum;

	return 0;
}