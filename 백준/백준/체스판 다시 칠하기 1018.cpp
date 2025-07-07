#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<char>> board(N, vector<char>(M));

    for (int i = 0; i < N; i++) {
        string line;
        cin >> line;
        for (int j = 0; j < M; j++) {
            board[i][j] = line[j];
        }
    }

    int min_repaint = 64; // 8x8 최대값

    for (int i = 0; i <= N - 8; i++) {
        for (int j = 0; j <= M - 8; j++) {
            int repaint_w = 0; // W로 시작
            int repaint_b = 0; // B로 시작

            for (int y = 0; y < 8; y++) {
                for (int x = 0; x < 8; x++) {
                    char expected = ((y + x) % 2 == 0) ? 'W' : 'B';
                    if (board[i + y][j + x] != expected) repaint_w++;
                    if (board[i + y][j + x] != ((expected == 'W') ? 'B' : 'W')) repaint_b++;
                }
            }

            min_repaint = min({ min_repaint, repaint_w, repaint_b });
        }
    }

    cout << min_repaint << '\n';
    return 0;
}
