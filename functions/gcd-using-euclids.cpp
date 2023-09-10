#include <iostream>
using namespace std;
int euclids(int a, int b)
{
  while(b!=0){
    int rem=a%b;
    a=b;
    b=rem;
  }
  return a;
}
int main()
{
    int n1, n2, temp = 0;
    cin >> n1 >> n2;
    cout << euclids( n1,n2) <<endl;

    return 0;
}