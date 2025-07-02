#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);

    int N, M;
    cin >> N;

    vector<int>pos(N);

    for (int i = 0; i < N; i++)
    {
        int count; 
        cin >> count;
        pos[i] = count;
    }

    // pos를 복사하여 정렬본 생성
    vector<int> sorted_pos = pos;

    sort(sorted_pos.begin(), sorted_pos.end());
    
    // 중복값을 뒤로 보내고 삭제
    sorted_pos.erase(unique(sorted_pos.begin(), sorted_pos.end()), sorted_pos.end()); 

    //O(logN) ,, lower_bound =>이분탐색으로 노드와의 거리를 계산
    for (const auto& x : pos)
    {
        int res = lower_bound(sorted_pos.begin(), sorted_pos.end(),x) - sorted_pos.begin();
        cout << res << " ";
    }

    //O(Nlog(N))
    return 0;
}
