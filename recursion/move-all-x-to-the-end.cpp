#include <iostream>
using namespace std;
string moveallx(string s)
{
    if (s.length() == 0)
    {
        return "";
    }
    char s1 = s[0];
    string ans = moveallx(s.substr(1));
    if (s1 == 'x')
    {
        return (ans + s1);
    }
    return (s1 + ans);
}
int main()
{
    cout << moveallx("asxdxfsdfcx");
    return 0;
}