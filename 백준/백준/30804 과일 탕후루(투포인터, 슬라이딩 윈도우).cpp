//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <map>
//using namespace std;
//
//int main()
//{
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//
//    int type;
//    cin >> type;
//
//    vector<int> tang(type); // 벡터 크기 초기화
//    map<int, int> fruits_map;
//
//    for (int i = 0; i < type; i++) {
//        cin >> tang[i];
//    }
//
//    int n = tang.size();
//    int max_length = 0;
//
//    for (int start = 0; start < n; start++) {
//        fruits_map.clear(); // 새로운 시작점마다 맵 초기화
//        int end = start;    // 반복문 외부에서 `end` 선언
//        for (; end < n; end++) 
//        {
//            fruits_map[tang[end]] += 1; // 현재 숫자를 추가
//            if (fruits_map.size() > 2) { // 숫자 종류가 2개 초과면 종료
//                break;
//            }
//        }
//        max_length = max(max_length, end - start); // 최대 길이 갱신
//    }
//
//    cout << max_length << endl;
//    return 0;
//}

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int type;
    cin >> type;

    vector<int> tang(type);
    for (int i = 0; i < type; i++) {
        cin >> tang[i];
    }

    unordered_map<int, int> fruits_map; // 숫자와 빈도를 저장
    int start = 0, max_length = 0;

    for (int end = 0; end < type; end++) {
        // 현재 숫자를 윈도우에 추가
        fruits_map[tang[end]]++;

        // 숫자 종류가 3개 이상이면 조건 위반 -> `start`를 이동
        while (fruits_map.size() > 2) {
            fruits_map[tang[start]]--; // 시작점 숫자의 빈도 감소
            if (fruits_map[tang[start]] == 0) {
                fruits_map.erase(tang[start]); // 빈도가 0이면 삭제
            }
            start++; // 시작점을 오른쪽으로 이동
        }

        // 조건을 만족하는 동안 최대 길이 갱신
        max_length = max(max_length, end - start + 1);
    }

    cout << max_length << endl;
    return 0;
}


//입력 배열 : {1, 2, 3, 3, 2, 4, 5, 4, 2}
//
//end = 0 : 윈도우는{ 1 } → fruits_map = { 1: 1 }
//end = 1 : 윈도우는{ 1, 2 } → fruits_map = { 1: 1, 2 : 1 }
//end = 2 : 윈도우는{ 1, 2, 3 } → fruits_map = { 1: 1, 2 : 1, 3 : 1 } → 조건 위반
//start = 0 : fruits_map = { 1: 0, 2 : 1, 3 : 1 } →{ 1 } 삭제 → fruits_map = { 2: 1, 3 : 1 }
//end = 3 : 윈도우는{ 2, 3, 3 } → fruits_map = { 2: 1, 3 : 2 }