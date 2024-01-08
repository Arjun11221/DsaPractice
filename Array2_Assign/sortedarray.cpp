#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    int arr[n];
    cout<<"Enter Array's Element : ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    bool flag = true;      // sorted
    for(int i = 0; i<n; i++){
        if(arr[i]>arr[i+1]){
            flag = false;
            break;
        }
    }

    if(flag==true) cout<<"Array is Sorted";
    else cout<<"Array isn't Sorted";

}