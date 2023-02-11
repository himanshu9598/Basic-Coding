#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i,element;

    cout<<"enter the length of the array: "<<endl;
    cin>>n;

    int arr[n];
    cout<<"enter the element of the array: "<<endl;
    for(int i=0;i<=n;i++)
        cin>>arr[i];
    cout<<"elememt in the array is: ";
    for(int i=0;i<=n;i++)
        cout<<arr[i] <<" ";
    
    
    return 0;
}