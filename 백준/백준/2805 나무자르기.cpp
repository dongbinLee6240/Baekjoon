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
            result = mid;         // 현재 높이로도 가능한 경우 → 더 높은 절단 시도
            low = mid + 1;
        }
        else {
            high = mid - 1;       // 너무 높이 잘라서 부족한 경우 → 더 낮은 높이로
        }
    }

    cout << result << '\n';
    return 0;
}
