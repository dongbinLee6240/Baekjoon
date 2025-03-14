#include <iostream>
#include <cmath>
using namespace std;

int cnt = 0; // �湮 ���� ����

void recur(int x, int y, int size, int r, int c)
{
    if (size == 1) { // �� �̻� �ɰ� �� ���� ��� (�� ĭ)
        if (x == r && y == c) {
            cout << cnt << '\n'; // ���� ���
        }
        cnt++; // �湮 ���� ����
        return;
    }

    int newSize = size / 2; // ���� ������ 4���
    int area = newSize * newSize; // �� ��и��� ũ��

    // 1��и� (�»�)
    if (r < x + newSize && c < y + newSize) 
    {
        recur(x, y, newSize, r, c);
    }
    // 2��и� (���)
    else if (r < x + newSize && c >= y + newSize) 
    {
        cnt += area; // ���� ��и� ������ŭ ī��Ʈ ����
        recur(x, y + newSize, newSize, r, c);
    }
    // 3��и� (����)
    else if (r >= x + newSize && c < y + newSize) 
    {
        cnt += 2 * area;
        recur(x + newSize, y, newSize, r, c);
    }
    // 4��и� (����)
    else 
    {
        cnt += 3 * area;
        recur(x + newSize, y + newSize, newSize, r, c);
    }
}

int main()
{
    int N, r, c;
    cin >> N >> r >> c;
    int size = pow(2, N); // ��ü �迭 ũ��

    recur(0, 0, size, r, c); // (0,0)���� Ž�� ����

    return 0;
}
