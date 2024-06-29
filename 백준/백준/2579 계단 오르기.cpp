#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    int result = 0;
    cin >> N;
    vector<int> step(N + 1, 0);
    vector<int> dp(N + 1, 0);

    for (int i = 1; i < N + 1; i++)
    {
        std::cin >> step[i];
    }
    if (N == 1) {
        cout << step[1] << endl;
        return 0;
    }
    if (N == 2) {
        cout << step[1] + step[2] << endl;
        return 0;
    }

    dp[1] = step[1];
    dp[2] = step[1] + step[2];
    dp[3] = max(step[1] + step[3], step[2] + step[3]);

    for (int i = 4; i <= N; i++) {
        dp[i] = max(dp[i - 2] + step[i], dp[i - 3] + step[i - 1] + step[i]);
    }

    cout << dp[N] << endl;
    return 0;
}