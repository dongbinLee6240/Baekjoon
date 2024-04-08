#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	map<string, string> site;
	string f_site;

	string str1;
	string str2;

	vector<string> arr;

	cin >> N >> M;

	for (int i = 0; i < N; i++)  //N개
	{
		cin >> str1 >> str2;
		site[str1] = str2;  //사이트에 비번 저장
		
	}

	for (int i = 0; i < M; i++)  //M개
	{
		cin >> f_site;
		
		auto it = site.find(f_site);  //입력 받은 사이트를 site맵에서 찾고 저장

		if (it != site.end())  
		{
			cout << it->second << '\n'; //2번째 값;
		}
	}

	return 0;

}