#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"enter the age: "<<endl;
    cin>>age;
    if(age>=18){
        cout<<"can vote!" <<endl;
    }
    else{
        cout<<"cann't vote!"<<endl;
    }

    return 0;
}