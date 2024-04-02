#include<iostream>
#include<stack>
#include<vector>
#include<string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    pair<string, int> input;
    int popnum; // 수정된 부분
    stack<int> S;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> input.first;

        if (input.first == "push")
        {
            cin >> input.second;
            S.push(input.second);
        }

        else if (input.first == "pop")
        {
            if (S.empty() == true)
            {
                cout << -1 << '\n';
            }

            else
            {
                popnum = S.top();
                S.pop();
                cout << popnum << '\n';
            }
        }

        else if (input.first == "top")
        {
            if (S.empty() == true)
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << S.top() << '\n';
            }
        }

        else if (input.first == "size")
        {
            cout << S.size() << '\n';
        }

        else if (input.first == "empty")
        {
            if (S.empty() == true)
            {
                cout << "1" << '\n';
            }
            else
            {
                cout << "0" << '\n';
            }
        }
    }

    return 0;
}
