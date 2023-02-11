#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"enter the number: "<<endl;
    cin>>num;
    if(num>0){
        cout<<"positive" <<endl;
    }
    else if(num==0){
        cout<<"zero" <<endl;
    }
    else{
        cout<<"negative";
    }

    return 0;
}