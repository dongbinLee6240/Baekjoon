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

    // pos�� �����Ͽ� ���ĺ� ����
    vector<int> sorted_pos = pos;

    sort(sorted_pos.begin(), sorted_pos.end());
    
    // �ߺ����� �ڷ� ������ ����
    sorted_pos.erase(unique(sorted_pos.begin(), sorted_pos.end()), sorted_pos.end()); 

    //O(logN) ,, lower_bound =>�̺�Ž������ ������ �Ÿ��� ���
    for (const auto& x : pos)
    {
        int res = lower_bound(sorted_pos.begin(), sorted_pos.end(),x) - sorted_pos.begin();
        cout << res << " ";
    }

    //O(Nlog(N))
    return 0;
}
