#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int S[1000];

    for (int i = 0; i < N; i++)
    {
        cin >> S[i];
    }

    sort(S, S + N);

    for (int i = 0; i < N; i++)
    {
        cout << S[i] << endl;
    }

    return 0;
}
