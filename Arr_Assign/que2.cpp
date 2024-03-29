#include<iostream>
#include<climits>
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
    v.push_back(90);

    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    int mx = INT_MIN;
    int smx = INT_MIN;
    int tmx = INT_MIN;

    // for(int i = 0; i<v.size(); i++){
    //     if(v[i]>mx) mx = v[i];
    // }
    // for(int i = 0; i<v.size(); i++){
    //     if(v[i]>smx && v[i] != mx ) smx = v[i];
    // }

    // for(int i = 0; i<v.size(); i++){
    //     if(v[i]>tmx && v[i] != mx && v[i] != smx ) tmx = v[i];
    // }

    for(int i = 0; i<v.size(); i++){
        if(v[i]>mx) {
            tmx = smx;
            smx = mx;
            mx = v[i];
        }
        else if(v[i]>smx && v[i] != mx){
            tmx = smx;
            smx = v[i];
        }
        else if(v[i]>tmx && v[i] != smx && v[i] != mx){
            tmx = v[i];
        }
    }

    cout<<mx<<endl;
    cout<<smx<<endl;
    cout<<tmx;
}