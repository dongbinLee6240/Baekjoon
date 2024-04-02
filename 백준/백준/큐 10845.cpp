#include<iostream>
#include<queue>
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
    queue<int> Q;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> input.first;

        if (input.first == "push")
        {
            cin >> input.second;
            Q.push(input.second);
        }

        else if (input.first == "pop")
        {
            if (Q.empty() == true)
            {
                cout << -1 << '\n';
            }

            else
            {
                popnum = Q.front();
                Q.pop();
                cout << popnum << '\n';
            }
        }

        else if (input.first == "back")
        {
            if (Q.empty() == true)
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << Q.back() << '\n';
            }
        }

        else if (input.first == "front")
        {
            if (Q.empty() == true)
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << Q.front() << '\n';
            }
        }

        else if (input.first == "size")
        {
            cout << Q.size() << '\n';
        }

        else if (input.first == "empty")
        {
            if (Q.empty() == true)
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
