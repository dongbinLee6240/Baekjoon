#include<iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	float score[1000];
	float tmp = 0;
	float sum=0;
	float avg;
	float record[1000];


	for (int i = 0; i < N; i++)
	{
		cin >> score[i];

		if (score[i] > tmp)
		{
			tmp = score[i];
		}
	}

	for (int i = 0; i < N; i++)
	{
		record[i] = (score[i] / tmp) * 100;
		sum += record[i];
	}
	avg = sum / N;
	cout << avg;

	return 0;
}