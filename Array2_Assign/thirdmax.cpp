#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    int v[n];
    cout<<"Enter Array's Element : ";
    for(int i = 0; i<n; i++){
        cin>>v[i];
    }
    int mx = INT_MIN;
    int smx = INT_MIN;
    int tmx = INT_MIN;

    for(int i = 0; i<n; i++){
        if(v[i]>mx) mx = v[i];
    }

    for(int i = 0; i<n; i++){
        if(v[i]>smx && v[i]!=mx) smx = v[i];
    }

    for(int i = 0; i<n; i++){
        if(v[i]>tmx && v[i]!=mx && v[i]!= smx) tmx = v[i];
    }
    cout<<"The Max Element is : "<<mx<<endl;
    cout<<"The SecondMax Element is : "<<smx<<endl;
    cout<<"The ThirdMax Element is : "<<tmx<<endl;




}