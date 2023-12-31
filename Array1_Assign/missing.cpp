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
  
    bool flag = false;

    int x = 1;
   
    for(int i = 0; i<n; i++){
        if(arr[i]<=0) continue;

        if(x!=arr[i]){
            flag = true;
            cout<<x;
            break;
        }
        else x++;
    }

    if(flag == false) cout<<"No Missing Element";

}