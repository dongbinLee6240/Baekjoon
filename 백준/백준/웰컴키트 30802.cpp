#include <iostream>
#include <vector>
//티셔츠를
//$T$장씩 최소 몇 묶음 주문해야 하는지, 그리고 펜을
//$P$자루씩 최대 몇 묶음 주문할 수 있고, 
//그 때 펜을 한 자루씩 몇 개 주문하는지 구하세요.
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N;
    int M;
    int T, P;
    int tmp1 = 0;
    int tmp2 = 0;
    int pmp1 = 0;
    int pmp2 = 0;
    int total = 0;
    int tresult = 0;
    char tshirt[6] = { 0, };
    vector<int>request;
    cin >> N;
    for (int i = 0; i < 6; i++)
    {
        cin >> M;
        if (M > N) //입력한 값이 총인원보다 많을 경우
        {
            return 0;
        }
        request.push_back(M); //push_back
    }

    //총합이 인원수보다 많을 경우
    for (int i = 0; i < 6; i++)
    {
        total += request[i];
    }
    if (total != N)
    {
        return 0;
    }
    cin >> T >> P;

    for (int i = 0; i < 6; i++)
    {
        if (request[i] == 0)
        {
            tshirt[i] = 0;
        }
        else if(request[i]!=0)
        {
            tmp1 = request[i] / T;
            tmp2 = request[i] % T;
            if (tmp2 > 0)
            {
                tshirt[i] = tmp1 + 1;
            }
            else if(tmp2 ==0)
            {
                tshirt[i] = tmp1;
            }
        }
        
    }

    for (int i = 0; i < 6; i++)
    {
        tresult += tshirt[i];
    }
    cout << tresult << '\n';

    pmp1 = N / P;
    pmp2 = N % P;
    
    cout << pmp1 << " " << pmp2;
    return 0;
}