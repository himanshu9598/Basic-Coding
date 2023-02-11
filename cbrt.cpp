#include<bits/stdc++.h>
#include<math.h>
#include<iostream>
using namespace std;

double SquareRoot(int x){
    double sq;
    sq=sqrt(x);
    return sq;
}
double cubicroot(int y){
    double  cb;
    cb=cbrt(y);
    return cb;
}

int main(){
    double x=49;
    double y=56;
    
    cout<<SquareRoot(x)<<endl;
    cout<<SquareRoot(y)<<endl;
    return 0;


}