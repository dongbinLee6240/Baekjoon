#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int A, B, V;
    cin >> A >> B >> V;

    // 하루에 A만큼 올라갔을 때, 목표 높이에 도달했는지 확인
    int days = ceil((double)(V - A) / (A - B)) + 1;

    cout << days << endl;

    return 0;
}