#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int arr[n];

    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    
    int pro = 1;

    for(int i = 0; i<n; i++){
        pro *= arr[i];
    }
    cout<<pro;
}