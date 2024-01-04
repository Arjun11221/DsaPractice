#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter Size : ";
    cin>>n;

    vector<int> v(n);
    cout<<"Enter Array's Element : ";
    for(int i = 0; i<n; i++){
        cin>>v[i];
    }

    cout<<"Enter X : ";
    int x;
    cin>>x;

    int idx = -1;

    // for(int i = 0; i<n; i++){
    //     if(v[i]==x) idx = i;
    // }

    for(int i = n-1; i>=0; i--){
        if(v[i]==x){
            idx = i; 
            break;
        }
    }
    cout<<"The Index is "<<idx;

}