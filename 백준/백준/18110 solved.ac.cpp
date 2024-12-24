#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
//첫 번째 줄에 난이도 의견의 개수 n이 주어진다. (0 ≤ n ≤ 3 × 105)
// 반올림 퍼센트, 평균 점수도 반올림, 절편 평균 30%
//이후 두 번째 줄부터 1 + n번째 줄까지 사용자들이 제출한 난이도 의견 n개가 한 줄에 하나씩 주어진다.모든 난이도 의견은 1 이상 30 이하이다.

//출력
//solved.ac가 계산한 문제의 난이도를 출력한다.
using namespace std;

int main()
{
	int t; //횟수
	int sc; //점수
	float total=0; //총점
	int avg;
	float percent = 0.15; //비율
	cin >> t;
	int ratio = round(t * percent);
	int divisionsize = 0;
	vector<int> score; //점수 저장 벡터
	//입력

	if (t == 0)
	{
		avg = 0;
	}
	else
	{
		for (int i = 0; i < t; i++)
		{
			cin >> sc;
			score.push_back(sc);
		}
		//정렬
		sort(score.begin(), score.end());
		//평균 계산
		for (int i = ratio; i < score.size() - ratio; i++)
		{
			total += score[i];
		}

		divisionsize = score.size() - (2 * ratio);
		avg = round(total / divisionsize); //평균
	}
	cout << avg << '\n';
	return 0;
}