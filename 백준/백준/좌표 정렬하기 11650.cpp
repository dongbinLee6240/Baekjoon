#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool compare(pair<int, int>a, pair<int, int> b)
{
	if (a.first < b.first)
	{
		return true;
	}

	else if (a.first == b.first)
	{
		return a.second < b.second;
	}

	else
	{
		return false;
	}

}

int main()
{
	int N;
	pair<int, int> pos;
	vector<pair<int,int>>arr; //pairÀÇ push_back
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> pos.first >> pos.second;
		arr.push_back(pos);
	}

	sort(arr.begin(), arr.end(), compare);


	for (int i=0; i<arr.size();i++)
	{
		cout << arr[i].first <<" "<< arr[i].second << '\n';
	}

	return 0;

}