#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);

	string str;

	cin >> str;

	vector<pair<char, int>>cnt(26); //cnt[0]= (A,개수)

	int a = 65;  //대문자로
	for (int i = 0; i < 26; i++)
	{
		cnt[i].first = static_cast<char>(a + i);
	}

	for (int i = 0; i < 26; i++)
	{
		for (int j = 0; j < str.size(); j++)
		{
			int alpha = str[j];

			if (alpha > 96)
			{
				alpha -= 32;
			}

			if (cnt[i].first == alpha)
			{
				cnt[i].second += 1;
			}
		}
	}

	sort(cnt.begin(), cnt.end(),[](auto a, auto b) 
		{
			return a.second > b.second;
		});

	if (cnt[0].second == cnt[1].second)
		cout << "?";
	else
		cout << cnt[0].first;


	return 0;
}