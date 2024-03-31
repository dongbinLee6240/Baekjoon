#include <iostream>
#include <cmath> // cmath ��� ���

using namespace std;

int isPrime(int key)
{
    if (key <= 1) return 0; // 1 ������ ���� �Ҽ��� �ƴ�
    for (int i = 2; i <= sqrt(key); ++i) // 2���� �����ٱ��� ������ ���������� Ȯ��
    {
        if (key % i == 0)
            return 0; // �Ҽ��� �ƴ�
    }
    return 1; // �Ҽ���
}

int main()
{
    int N;
    int num;
    int cnt = 0; // �Ҽ��� ������ ������ ����

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> num;

        if (isPrime(num))
        {
            cnt++; // �Ҽ��� ��� cnt ����
        }
    }

    cout << cnt; // �Ҽ��� ���� ���

    return 0;
}
