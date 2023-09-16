#include <iostream>
using namespace std;
void ReplacePI(string str, int j)
{
    if (j < str.length())
    {
        if (str[j] == 'p')
        {
            if (str[j + 1] == 'i')
            {
                cout << "3.14";
                ReplacePI(str, j + 2);
            }
            else
            {
                cout << str[j];
            }
        }
        else
        {
            cout << str[j];
            ReplacePI(str, j + 1);
        }
    }
}
int main()
{
    string str = "ofpiofjpiewopijfepio";
    ReplacePI(str, 0);
    return 0;
}