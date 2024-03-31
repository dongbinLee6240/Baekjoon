#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool compare(string a, string b)
{
	if (a.size() < b.size())
	{
		return true;
	}
	else if (a.size() == b.size())
	{
		return a < b; //c++에서 string은 기본적으로 사전적 우선
	}
	else
	{
		return false;
	}
}


int main()
{
	int N;
	vector<string> words;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		string word;
		cin >> word;
		words.push_back(word);
	}

	sort(words.begin(), words.end());
	words.erase(unique(words.begin(), words.end()), words.end());  //unique()함수는 중복되는 내용이 있으면 모두 맨뒤에 보낸다. 
                                                                   //맨뒤에 보낸 words의 맨 뒤를 삭제하면 중복된 내용은 없다.
	sort(words.begin(), words.end(), compare);

	for (const string& word: words)  //word는 words를 받아오고 word가 없을때까지 출력
	{
		cout << word << '\n';
	}

	return 0;

}