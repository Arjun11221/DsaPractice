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
    bool flag = false;

   for(int i = 0; i<n; i++){
    if(arr[i]!=i+1) {
        flag = true;
        cout<<i+1;
        break;
    }
   }

   
   
}