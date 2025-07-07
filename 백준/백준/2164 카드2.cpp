#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main()
{
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);

	int N;
	cin >> N;
	queue<int>card;

	for (int i = 1; i <= N; i++)
	{
		card.push(i);
	}

	//ī���� ����� 1�� �ɶ�����
	while (card.size() != 1)
	{
		card.pop();
		int temp = card.front();
		card.pop();
		card.push(temp);
	}

	cout << card.front();

	return 0;
}