#include <iostream>
using namespace std;
void triplet(int a, int b, int c)
{
    if (a * a == ((b * b) + (c * c)) || b * b == (a * a + c * c) || c * c == (a * a + b * b))
    {
        cout << "Yes they are pythogorean triplet";
    }
    else
    {
        cout << "No they are pythogorean triplet";
    }
}

int main()
{
    int a, b, c;
    cout << "Enter three numbers to check if they are pythagorean triplet." << endl;
    cin >> a >> b >> c;
    triplet(a, b, c);
    return 0;
}