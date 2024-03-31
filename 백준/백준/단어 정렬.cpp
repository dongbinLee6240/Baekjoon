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
		return a < b; //c++���� string�� �⺻������ ������ �켱
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
	words.erase(unique(words.begin(), words.end()), words.end());  //unique()�Լ��� �ߺ��Ǵ� ������ ������ ��� �ǵڿ� ������. 
                                                                   //�ǵڿ� ���� words�� �� �ڸ� �����ϸ� �ߺ��� ������ ����.
	sort(words.begin(), words.end(), compare);

	for (const string& word: words)  //word�� words�� �޾ƿ��� word�� ���������� ���
	{
		cout << word << '\n';
	}

	return 0;

}