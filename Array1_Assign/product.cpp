#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Array Size : ";
    cin>>n;

    int arr[n];

    cout<<"Enter Array's Element : ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    int prod = 1;

    for(int i = 0; i<n; i++){
        prod *= arr[i];
    }

    cout<<prod;
}