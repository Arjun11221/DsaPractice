#include<iostream>
#include<vector>
using namespace std;

void reversePart(int i, int j , vector<int>& v){
    while(i<j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    return;
}

int main(){
    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    v.push_back(4);
    v.push_back(3);
    v.push_back(4);
    v.push_back(1);
    v.push_back(6);

    int n = v.size();
    int k = 20;

    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    if(k>n) k = k % n;
    reversePart(0,n-k-1,v);
    reversePart(n-k,n-1,v);
    reversePart(0,n-1,v);

    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
     
}