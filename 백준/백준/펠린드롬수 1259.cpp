#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string num;

    while (num != "0")
    {
        cin >> num;

        if (num == "0")
        {
            break;
        }

        else
        {
            string reversed = num;

            reverse(reversed.begin(), reversed.end());

            if (num == reversed)
            {
                cout << "yes" << '\n' ;
            }
            else
            {
                cout << "no" << '\n';
            }
        }
    }

    return 0;
}
