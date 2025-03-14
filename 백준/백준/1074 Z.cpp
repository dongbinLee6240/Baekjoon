#include <iostream>
#include <cmath>
using namespace std;

int cnt = 0; // 방문 순서 저장

void recur(int x, int y, int size, int r, int c)
{
    if (size == 1) { // 더 이상 쪼갤 수 없는 경우 (한 칸)
        if (x == r && y == c) {
            cout << cnt << '\n'; // 정답 출력
        }
        cnt++; // 방문 순서 증가
        return;
    }

    int newSize = size / 2; // 현재 영역을 4등분
    int area = newSize * newSize; // 각 사분면의 크기

    // 1사분면 (좌상)
    if (r < x + newSize && c < y + newSize) 
    {
        recur(x, y, newSize, r, c);
    }
    // 2사분면 (우상)
    else if (r < x + newSize && c >= y + newSize) 
    {
        cnt += area; // 이전 사분면 개수만큼 카운트 증가
        recur(x, y + newSize, newSize, r, c);
    }
    // 3사분면 (좌하)
    else if (r >= x + newSize && c < y + newSize) 
    {
        cnt += 2 * area;
        recur(x + newSize, y, newSize, r, c);
    }
    // 4사분면 (우하)
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
    int size = pow(2, N); // 전체 배열 크기

    recur(0, 0, size, r, c); // (0,0)부터 탐색 시작

    return 0;
}
