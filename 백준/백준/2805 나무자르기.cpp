#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isPossible(const vector<int>& woods, int height, int M) {
    long long sum = 0;
    for (int wood : woods) {
        if (wood > height) {
            sum += (wood - height);
        }
    }
    return sum >= M;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, M;
    cin >> N >> M;

    vector<int> woods(N);
    int maxHeight = 0;
    for (int i = 0; i < N; i++) {
        cin >> woods[i];
        maxHeight = max(maxHeight, woods[i]);
    }

    int low = 0, high = maxHeight;
    int result = 0;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (isPossible(woods, mid, M)) {
            result = mid;         // ���� ���̷ε� ������ ��� �� �� ���� ���� �õ�
            low = mid + 1;
        }
        else {
            high = mid - 1;       // �ʹ� ���� �߶� ������ ��� �� �� ���� ���̷�
        }
    }

    cout << result << '\n';
    return 0;
}
