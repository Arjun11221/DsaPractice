#include<iostream>
#include<climits>
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

    int mn = INT_MAX;

    for(int i = 0; i<n; i++){
        if(mn>arr[i]) mn = arr[i];
        // mn = min(mn,arr[i]);
    }
    cout<<mn;
}