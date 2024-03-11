#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int T;
	int x1, y1, r1, x2, y2, r2;
	int distance;

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		distance = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));

		//원의 중심이 같은 경우
		if (x1 == x2 && y1 == y2)
		{
			//반지름이 같은 경우
			if (r1 == r2)
			{
				cout << -1 << '\n';
			}
			//반지름이 다른 경우
			else
				cout << 0 << '\n';
		}
		//원의 중심이 다를 경우
		else
		{
			int sumradi = abs(r1 + r2);
			int diffradi = abs(r1 - r2);

			//내접 & 외접	
			if (sumradi == distance || diffradi == distance)
			{
				cout << 1 << '\n';
			}

			//접점이 2개
			else if (diffradi < distance && distance < sumradi)
			{
				cout << 2 << '\n';
			}
			else
			{
				cout << 0 << '\n';
			}
		}
	}

	return 0;

}