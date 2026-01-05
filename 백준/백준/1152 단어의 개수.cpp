#include <iostream>
#include <vector>
#include <string>
using namespace std;

//int main()
//{
//    string str;
//    vector<string> str1;
//    int word = 0;
//
//    getline(cin, str);   // 공백 포함 입력
//    str1.push_back(str);
//
//    for (int i = 0; i < str.size(); i++)
//    {
//        if (i == 0 && str[i] == ' '||i==str.size()-1 &&str[i]== ' ')
//            continue;
//
//        if (str[i] == ' ')
//            word++;
//    }
//
//    cout << word + 1;
//    return 0;
//}

int main()
{
    int word = 0;
    bool inWord = false;
    string str;

    getline(cin, str);

    for (char c : str)
    {
        if (c != ' ' && !inWord)
        {
            word++;
            inWord = true;
        }
        else if (c == ' ')
        {
            inWord = false;
        }
    }

    cout << word;

}
