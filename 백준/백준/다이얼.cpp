#include <iostream>
#include <string>
using namespace std;

int main()
{
    string dial;
    cin >> dial;

    int table[26] = {
        3,3,3,  // ABC
        4,4,4,  // DEF
        5,5,5,  // GHI
        6,6,6,  // JKL
        7,7,7,  // MNO
        8,8,8,8,// PQRS
        9,9,9,  // TUV
        10,10,10,10 // WXYZ
    };

    int time = 0;
    for (char ch : dial)
        time += table[ch - 'A'];

    cout << time;
}
