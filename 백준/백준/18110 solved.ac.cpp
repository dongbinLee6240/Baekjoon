#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
//ù ��° �ٿ� ���̵� �ǰ��� ���� n�� �־�����. (0 �� n �� 3 �� 105)
// �ݿø� �ۼ�Ʈ, ��� ������ �ݿø�, ���� ��� 30%
//���� �� ��° �ٺ��� 1 + n��° �ٱ��� ����ڵ��� ������ ���̵� �ǰ� n���� �� �ٿ� �ϳ��� �־�����.��� ���̵� �ǰ��� 1 �̻� 30 �����̴�.

//���
//solved.ac�� ����� ������ ���̵��� ����Ѵ�.
using namespace std;

int main()
{
	int t; //Ƚ��
	int sc; //����
	float total=0; //����
	int avg;
	float percent = 0.15; //����
	cin >> t;
	int ratio = round(t * percent);
	int divisionsize = 0;
	vector<int> score; //���� ���� ����
	//�Է�

	if (t == 0)
	{
		avg = 0;
	}
	else
	{
		for (int i = 0; i < t; i++)
		{
			cin >> sc;
			score.push_back(sc);
		}
		//����
		sort(score.begin(), score.end());
		//��� ���
		for (int i = ratio; i < score.size() - ratio; i++)
		{
			total += score[i];
		}

		divisionsize = score.size() - (2 * ratio);
		avg = round(total / divisionsize); //���
	}
	cout << avg << '\n';
	return 0;
}