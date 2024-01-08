#include<iostream>
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
    int x;
    cout<<"Enter x : ";
    cin>>x;
    
    int count = 0;
    for(int i = 0; i<n; i++){
        if(v[i]>x) count++;
    }
    cout<<count;

}