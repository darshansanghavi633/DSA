#include<iostream>
using namespace std;

int main(){
    int num1,num2,num3;
    cout<<"enter three numbers\n";
    cin>>num1>>num2>>num3;
    if(num1>num2){
        if(num1>num3){
            cout<<"the maximum number is "<<num1;
        }
        else{
            cout<<"the maximum number is "<<num3;
        }
    }
    else{
        if(num2>num3){
            cout<<"the maximum number is "<<num2;
        }
        else{
            cout<<"the maximum number is "<<num3;
        }
    }

    return 0;
}