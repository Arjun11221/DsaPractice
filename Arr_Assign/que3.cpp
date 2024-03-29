#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(6);
    v.push_back(6);
    v.push_back(6);
    v.push_back(7);
    

    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    bool flag = true;
    for(int i = 0; i<v.size()-1; i++){
        if(v[i]>v[i+1]) {
            flag = false;
            break;
        }
    }

    if(flag==true) cout<<"Sorted";
    else cout<<"Not Sorted";



}