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
//    vector<int> tang(type); // ���� ũ�� �ʱ�ȭ
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
//        fruits_map.clear(); // ���ο� ���������� �� �ʱ�ȭ
//        int end = start;    // �ݺ��� �ܺο��� `end` ����
//        for (; end < n; end++) 
//        {
//            fruits_map[tang[end]] += 1; // ���� ���ڸ� �߰�
//            if (fruits_map.size() > 2) { // ���� ������ 2�� �ʰ��� ����
//                break;
//            }
//        }
//        max_length = max(max_length, end - start); // �ִ� ���� ����
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

    unordered_map<int, int> fruits_map; // ���ڿ� �󵵸� ����
    int start = 0, max_length = 0;

    for (int end = 0; end < type; end++) {
        // ���� ���ڸ� �����쿡 �߰�
        fruits_map[tang[end]]++;

        // ���� ������ 3�� �̻��̸� ���� ���� -> `start`�� �̵�
        while (fruits_map.size() > 2) {
            fruits_map[tang[start]]--; // ������ ������ �� ����
            if (fruits_map[tang[start]] == 0) {
                fruits_map.erase(tang[start]); // �󵵰� 0�̸� ����
            }
            start++; // �������� ���������� �̵�
        }

        // ������ �����ϴ� ���� �ִ� ���� ����
        max_length = max(max_length, end - start + 1);
    }

    cout << max_length << endl;
    return 0;
}


//�Է� �迭 : {1, 2, 3, 3, 2, 4, 5, 4, 2}
//
//end = 0 : �������{ 1 } �� fruits_map = { 1: 1 }
//end = 1 : �������{ 1, 2 } �� fruits_map = { 1: 1, 2 : 1 }
//end = 2 : �������{ 1, 2, 3 } �� fruits_map = { 1: 1, 2 : 1, 3 : 1 } �� ���� ����
//start = 0 : fruits_map = { 1: 0, 2 : 1, 3 : 1 } ��{ 1 } ���� �� fruits_map = { 2: 1, 3 : 1 }
//end = 3 : �������{ 2, 3, 3 } �� fruits_map = { 2: 1, 3 : 2 }