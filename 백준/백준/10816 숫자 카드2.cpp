#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);

	int N;
	int CardNumber;
	int M;

	unordered_map<int, int>Cards; //¼ýÀÚ , °¹¼ö

	cin >> N;
	
	for (int i = 0; i < N; i++)
	{
		cin >> CardNumber;
		Cards[CardNumber] += 1; //CardNumber¿¡ ´ëÇÑ °¹¼ö count
	}

	cin >> M;
	vector<int>Wanted(M, 0);

	for (int i = 0; i < M; i++)
	{
		cin >> Wanted[i];
	}

	for (int i = 0; i < M; i++)
	{
		cout << Cards[Wanted[i]] << " ";
	}
}