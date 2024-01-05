#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter Size : ";
    cin>>n;

    vector<int> v1;
    cout<<"Enter Array's Element : ";
    for(int i = 0; i<n; i++){
        int q;
        cin>>q;
        v1.push_back(q);
    }

    int i = 0;
    int j = v1.size()-1;

    while (i<=j){
        int temp = v1[i];
        v1[i] = v1[j];
        v1[j] = temp;
        i++;
        j--;
    }

    for(int i = 0; i<n; i++){
        cout<<v1[i]<<" ";
    }

    
}