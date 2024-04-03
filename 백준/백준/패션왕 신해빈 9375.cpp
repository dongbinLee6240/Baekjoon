#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        map<string, int> clothes;

        for (int j = 0; j < n; j++)
        {
            string name, category;
            cin >> name >> category;

            if (clothes.find(category) != clothes.end())
            {
                clothes[category] += 1;
            }
            else
            {
                clothes[category] = 1;
            }
        }

        int totalCombi = 1;
        for (auto& elem : clothes)
        {
            totalCombi *= (elem.second + 1);
        }
        totalCombi -= 1;

        cout << totalCombi << '\n';
    }

    return 0;
}
