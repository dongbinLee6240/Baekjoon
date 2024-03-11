#include<iostream>
using namespace std;

int main()
{
    int N, M, K;

    cin >> N >> M;

    int A[100];
    int B[100];
    int C[100];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> A[i * M + j];
        }
    }

    cout << M; cin >> K;

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < K; j++)
        {
            cin >> B[i * K + j];
        }
    }

    for()
}


//0*2+0=0 0*2+1=1
//1*2+0=2 1*2+1=3
//2*2+0=4 2*2+1=5