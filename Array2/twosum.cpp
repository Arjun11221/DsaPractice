#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x;
    cout<<"Enter X : ";
    cin>>x;

    int n;
    cout<<"Enter Size : ";
    cin>>n;

    vector<int> v;
    cout<<"Enter Array's Element : ";
    for(int i = 0; i<n; i++){
        int q;
        cin>>q;
        v.push_back(q);
    }

    for(int i = 0; i<=v.size()-2; i++){
        for(int j = i+1; j<=v.size()-1; j++){
            if(v[i]+v[j]==x) {
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }
}