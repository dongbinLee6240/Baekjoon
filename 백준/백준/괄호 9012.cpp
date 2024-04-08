#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(void) {
	int k;
	cin >> k;

	while (k > 0) {
		k--;
		string input;
		cin >> input;

		stack<char> st;
		string answer = "YES";
		for (int i = 0; i < input.length(); i++) {
			//'('�� ���ÿ� ����
			if (input[i] == '(') {
				st.push(input[i]);
			}
			//')'�� ������ ���ÿ� ����� '('�� ¦�� �´��� Ȯ���ϰ� pop
			else if (!st.empty() && input[i] == ')' && st.top() == '(') {
				st.pop();
			}
			//���� ��츦 �����ϰ�� ��� vps�� �ƴ� ��Ȳ�̹Ƿ� ����(break)
			else {
				answer = "NO";
				break;
			}
		}
		//'('�� ')'�� ¦�� �� �´� ��� '('�� ��� pop���� �ʱ� ������
		// ������ ���� �ʴ´�. ���� �� ���� vps�� �ƴϹǷ� "NO"
		if (!st.empty()) answer = "NO";

		cout << answer << endl;
	}
	return 0;
}