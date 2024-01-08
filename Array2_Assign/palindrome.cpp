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
    bool flag = true;
    for(int i = 0 , j = n-1; i<n; i++ , j--){
        if(arr[i]!=arr[j]) {
            flag = false;
            break;
        }
    }
    if(flag == true) cout<<"Array is palindrome";
    else cout<<"Array isn't palindrome";
}