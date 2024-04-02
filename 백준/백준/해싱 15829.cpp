#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <algorithm>
#include <cmath>

#define M 1234567891;

using namespace std;

class HashMap
{
private:
	vector<list<int>> data;

public:
	HashMap(unsigned int n)
	{
		data.resize(n);
	}

	int hashfun(int A, int i)
	{
		int key;
		key = (A * i)% M;
		return key;
	}
};

int main()
{
	int L;
	string alpha;
	long long r = 1;
	int res = 0;

	cin >> L;

	HashMap hashtable(L);

	cin >> alpha;

	if (alpha.size() > L)
	{
		return 0;
	}

	for (int i = 0; i < L; i++)
	{
		res += hashtable.hashfun(alpha[i] - 96, r);
		r = (r * 31) % M;
	}

	cout << res;

}