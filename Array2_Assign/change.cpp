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
    for(int i = 0; i<n; i++){
        if(i%2==0){
            arr[i] = 10 + arr[i];
        }
        else {
            arr[i] = 2 * arr[i];
        }
        cout<<arr[i]<<" ";
    }
}