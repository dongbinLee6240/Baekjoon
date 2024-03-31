//첫째 줄에 온라인 저지 회원의 수 N이 주어진다. (1 ≤ N ≤ 100, 000)
//둘째 줄부터 N개의 줄에는 각 회원의 나이와 이름이 공백으로 구분되어 주어진다.
//나이는 1보다 크거나 같으며, 200보다 작거나 같은 정수이고,
//이름은 알파벳 대소문자로 이루어져 있고, 
//길이가 100보다 작거나 같은 문자열이다.입력은 가입한 순서로 주어진다.

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
		cin >> tmp.first >> tmp.second;  //pair에서는 first, second 사용
		arr.push_back(tmp);
	}

	stable_sort(arr.begin(), arr.end(), compare); //정렬 push_back에서는 begin & end 사용, stable_sort는 동일값일때도 순서를 보장

	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i].first << " " << arr[i].second << '\n';
	}

	return 0;
}