#include<iostream>
using namespace std;

int main()
{
	string subject;
	float score;
	string grade;
	string ap = "A+";
	string a = "A0";
	string bp = "B+";
	string b = "B";
	string cp = "C+";
	string c = "C";
	string dp = "D+";
	string d = "D0";
	string f = "F";
	string p = "P";
	float sum = 0;

	for (int i = 0; i < 20; i++)
	{
		cin >> subject >> score >> grade;

		if (grade.compare(ap) == 0)
		{
			sum += 4.5 * score;
		}
		else if (grade.compare(a) == 0)
		{
			sum += 4.0 * score;
		}
		else if (grade.compare(bp) == 0)
		{
			sum += 3.5 * score;
		}
		else if (grade.compare(b) == 0)
		{
			sum += 3.0 * score;
		}
		else if (grade.compare(cp) == 0)
		{
			sum += 2.5 * score;
		}
		else if (grade.compare(c) == 0)
		{
			sum += 2.0 * score;
		}
		else if (grade.compare(p) == 0||grade.compare(f)==0)
		{
			sum += 0 * score;
		}

	}
	cout << sum;
}