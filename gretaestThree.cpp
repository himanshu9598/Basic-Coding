#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int num1,num2,num3;
    cout<<"enter the value of num1: "<<endl;
    cin>>num1;
    cout<<"enter the value of num2: "<<endl;
    cin>>num2;
    cout<<"enter the value of num3: "<<endl;
    cin>>num3;

    if(num1>num2 && num1>num3){
        cout<<"number 1 is greatest";
    }
    else if(num2>num3 && num2>num1){
        cout<<"number 2 is greatest";
    }
    else if(num3>num1 && num3>num2){
        cout<<"number 3 is greatest";
    }
    else{
        cout<<"all three numbers are equal to each other" <<endl;
    }

    return 0;
}