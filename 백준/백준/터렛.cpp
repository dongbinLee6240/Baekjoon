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

		//���� �߽��� ���� ���
		if (x1 == x2 && y1 == y2)
		{
			//�������� ���� ���
			if (r1 == r2)
			{
				cout << -1 << '\n';
			}
			//�������� �ٸ� ���
			else
				cout << 0 << '\n';
		}
		//���� �߽��� �ٸ� ���
		else
		{
			int sumradi = abs(r1 + r2);
			int diffradi = abs(r1 - r2);

			//���� & ����	
			if (sumradi == distance || diffradi == distance)
			{
				cout << 1 << '\n';
			}

			//������ 2��
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