#include <iostream>
#include <string.h>
using namespace std;
void ReverseString(string s)
{
    for (int i = s.length(); i >= 0; i--)
    {
        cout << s[i] << " ";
    }
}
int main()
{
    string s;
    cin >> s;
    ReverseString(s);
    return 0;
}