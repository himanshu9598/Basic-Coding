#include<iostream>
using namespace std;
#include<math.h>

int Add(int a,int b){
    int sum;
    sum=a+b;
    return sum;
}
int substract(int a,int b){
    int minus;
    minus=a-b;
    return minus;
}
int multiply(int a,int b){
    int product;
    product=a*b;
    return product;
}

float division(int a,int b){
    float quotient;
    quotient=a/b;
    return quotient;
}

int modulus(int a,int b){
    int modu;
    modu=a%b;
    return modu;
}
int power(int a,int b){
    int powe;
    powe=pow(a,b);
    return powe;
}

int main(){
    int x,y;
    cin>>x;
    cin>>y;
    cout<<Add(x,y)<<endl;
    cout<<substract(x,y)<<endl;
    cout<<multiply(x,y)<<endl;
    cout<<division(x,y)<<endl;
    cout<<power(x,y)<<endl;

    return 0;
}
