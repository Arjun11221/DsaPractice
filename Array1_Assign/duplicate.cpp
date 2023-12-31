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
   
    bool flag = false;    // false means duplicate isn't present
    for(int i = 0; i<n-1; i++){
        for(int j = i+1; j<n; j++){
            if(arr[i]==arr[j]) {
                flag = true;
                break;
            }     
        }

        if(flag == true) break;
    }
     
    if(flag==true){
        cout<<"Duplicate is present";
    }
    else {
        cout<<"Duplicate isn't present";
    }
}