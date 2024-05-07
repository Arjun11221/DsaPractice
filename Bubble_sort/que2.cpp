#include<iostream>
using namespace std;
int main(){
    int arr[] = {10,12,13,40,150};
    int n = 5;
    bool flag = true;
    
    for(int i = 0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            flag = false;
            break;
        }
    }

    if(flag==true) cout<<"Array is Sorted";
    else cout<<"Array isn't sorted";
}