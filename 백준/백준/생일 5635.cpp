#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

class ClassMate
{
public:
	string name;
	int dd;
	int mm;
	int yyyy;
};

bool compare(const ClassMate& a, const ClassMate& b)
{
	if (a.yyyy < b.yyyy)
	{
		return true;
	}
	else if (a.yyyy == b.yyyy)
	{
		if (a.mm < b.mm)
			return true;
		else if (a.mm == b.mm && a.dd < b.dd)
			return true;
	}
	return false;
}

int main()
{
	int N;
	cin >> N;

	string older;
	string younger;

	vector<ClassMate> classmate(N);

	for (int i = 0; i < N; i++)
	{
		cin >> classmate[i].name >> classmate[i].dd >> classmate[i].mm >> classmate[i].yyyy;

		if(classmate[i].name.size()>15)
		{
			return 0;
		}
		
		else if (classmate[i].yyyy< 1990 || classmate[i].yyyy> 2010)
		{
			return 0;
		}

		else if (classmate[i].mm < 1 || classmate[i].mm> 12)
		{
			return 0;
		}

		else if (classmate[i].dd < 1 || classmate[i].dd>31)
		{
			return 0;
		}

	}

	sort(classmate.begin(), classmate.end(),compare);

	cout << classmate.back().name << '\n';
	cout << classmate.front().name << '\n';

	return 0;

}