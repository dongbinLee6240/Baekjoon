#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int pos[26];

    // 1?? 전부 -1로 초기화
    for (int i = 0; i < 26; i++)
        pos[i] = -1;

    // 2?? 문자열 순회
    for (int i = 0; i < s.size(); i++)
    {
        int idx = s[i] - 'a'; // 문자 → 0~25

        // 처음 등장했을 때만 기록
        if (pos[idx] == -1)
            pos[idx] = i;
    }

    // 3?? 결과 출력
    for (int i = 0; i < 26; i++)
        cout << pos[i] << " ";

    return 0;
}
