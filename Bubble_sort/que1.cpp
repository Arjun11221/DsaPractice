#include<iostream>
using namespace std;
int main(){
    int arr[] = {4,5,-2,3,-1};
    int n = 5;

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    cout<<endl;

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}