#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(5);
    v.push_back(1);
    v.push_back(3);
    v.push_back(8);
    v.push_back(40);
    v.push_back(10);
    v.push_back(9);

    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    int x = 5;
    int count = 0;

    for(int i = 0; i<v.size(); i++){
        if(v[i]>5) count++;
    }
    cout<<count;
}