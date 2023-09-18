#include <iostream>
using namespace std;
string RemoveDuplicate(string s)
{
    if (s.length() == 0)
    {
        return "";
    }
    char ch = s[0];
    string str = RemoveDuplicate(s.substr(1));

    if (ch == str[0])
    {
        return str;
    }
    return (ch + str);
}
int main()
{
    cout << RemoveDuplicate("aaabbcccdddeee");
    return 0;
}