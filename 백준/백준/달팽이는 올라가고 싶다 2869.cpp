#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int A, B, V;
    cin >> A >> B >> V;

    // �Ϸ翡 A��ŭ �ö��� ��, ��ǥ ���̿� �����ߴ��� Ȯ��
    int days = ceil((double)(V - A) / (A - B)) + 1;

    cout << days << endl;

    return 0;
}