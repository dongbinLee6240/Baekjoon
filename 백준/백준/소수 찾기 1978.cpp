#include <iostream>
#include <cmath> // cmath 헤더 사용

using namespace std;

int isPrime(int key)
{
    if (key <= 1) return 0; // 1 이하의 수는 소수가 아님
    for (int i = 2; i <= sqrt(key); ++i) // 2부터 제곱근까지 나누어 떨어지는지 확인
    {
        if (key % i == 0)
            return 0; // 소수가 아님
    }
    return 1; // 소수임
}

int main()
{
    int N;
    int num;
    int cnt = 0; // 소수의 개수를 저장할 변수

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> num;

        if (isPrime(num))
        {
            cnt++; // 소수일 경우 cnt 증가
        }
    }

    cout << cnt; // 소수의 개수 출력

    return 0;
}
