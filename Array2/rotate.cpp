#include<iostream>
#include<vector>
using namespace std;

void reversePart(int i , int j , vector<int>& v){
    while(i<=j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
}

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
    int k;
    cout<<"Enter k : ";
    cin>>k;
    if(k>n) k = k%n;

    reversePart(0,n-k-1,v1);
    reversePart(n-k,n-1,v1);
    reversePart(0,n-1,v1);

    for(int i = 0; i<n; i++){
        cout<<v1[i]<<" ";
    }    
}