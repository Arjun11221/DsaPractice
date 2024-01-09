#include<iostream>
#include<vector>
using namespace std;

void sort02(vector<int>& v){
    int n = v.size();
    int i = 0;
    int j = n-1;
    while(i<j){
        if(v[i]<0) i++;
        else if(v[j]>0) j--;
        else if(v[i]>0&&v[j]<0){
            swap(v[i],v[j]);
            i++;
            j--;
        }
    }
}

int main(){
    vector<int> v;
    v.push_back(-1);
    v.push_back(3);
    v.push_back(4);
    v.push_back(-5);
    v.push_back(7);
    v.push_back(-1);
    v.push_back(1);
    v.push_back(-10);

    sort02(v);
    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}