#include<bits/stdc++.h>
using namespace std;

int main(){
    double base;
    int exp;

    cout<<"enter the base value: ";
    cin>>base;

    cout<<"enter the exponential value: ";
    cin>>exp;

    double result = 1;
    for(int i=1;i<=exp;i++){
        result=result*base;
    }
    cout<<result;
    return 0;
}