//ù° �ٿ� �¶��� ���� ȸ���� �� N�� �־�����. (1 �� N �� 100, 000)
//��° �ٺ��� N���� �ٿ��� �� ȸ���� ���̿� �̸��� �������� ���еǾ� �־�����.
//���̴� 1���� ũ�ų� ������, 200���� �۰ų� ���� �����̰�,
//�̸��� ���ĺ� ��ҹ��ڷ� �̷���� �ְ�, 
//���̰� 100���� �۰ų� ���� ���ڿ��̴�.�Է��� ������ ������ �־�����.

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int,string> a, pair<int,string> b)  
{
	return a.first < b.first;  
}

int main()
{
	int N;

	cin >> N;

	pair<int, string> tmp;  //pair tmp
	vector<pair<int, string>> arr;  //pushback arr

	for (int i = 0; i < N; i++)
	{
		cin >> tmp.first >> tmp.second;  //pair������ first, second ���
		arr.push_back(tmp);
	}

	stable_sort(arr.begin(), arr.end(), compare); //���� push_back������ begin & end ���, stable_sort�� ���ϰ��϶��� ������ ����

	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i].first << " " << arr[i].second << '\n';
	}

	return 0;
}