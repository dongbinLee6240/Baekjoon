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

	for (int i = 0; i < N; i++)  //N��
	{
		cin >> str1 >> str2;
		site[str1] = str2;  //����Ʈ�� ��� ����
		
	}

	for (int i = 0; i < M; i++)  //M��
	{
		cin >> f_site;
		
		auto it = site.find(f_site);  //�Է� ���� ����Ʈ�� site�ʿ��� ã�� ����

		if (it != site.end())  
		{
			cout << it->second << '\n'; //2��° ��;
		}
	}

	return 0;

}