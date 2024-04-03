#include <iostream>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	map<string,int>list;
	map<string, int>list2;
	string str;
	string str2;

	vector<string> arr;

	int N, M;
	int cnt = 0;

	cin >> N >> M;
	for (int i = 0; i < N;i++)
	{
		cin >> str;
		list.insert(pair<string, int>(str,i));  //str과 i를 삽입
	}

	for (int i = 0; i < M; i++)
	{
		cin >> str2;
		list2.insert(pair<string, int>(str2, i));  //str2,i를 삽입
	}

	for (const auto& f_list : list)
	{
		auto it = list2.find(f_list.first);
		if (it != list2.end())  //list2끝의 반복자와 다를 경우
		{
			cnt += 1;
			arr.push_back(f_list.first);
		}
	}

	cout << cnt << '\n';

	for (const auto & elem:arr)
	{
		cout << elem << '\n';
	}

	return 0;
}