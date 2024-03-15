#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int arr[n];

    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter x : ";
    cin>>x;

    bool check = false;

    for(int i = 0; i<n; i++){
        if(arr[i]==x){
            cout<<arr[i]<<" ";
            check = true;
            break;
        }
    }
    if(check==true){
        cout<<"Num present";
    }
    else {
        cout<<"Num isn't present";
    }

}