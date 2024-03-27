#include<iostream>
#include<vector>
using namespace std;

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

    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    for(int i=0,j=v.size()-1; i<v.size(); i++,j--){
        if(i<j){
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
        }
        
    }
    // int i = 0;
    // int j = v.size()-1;

    // while(i<j){
    //     int temp = v[i];
    //     v[i] = v[j];
    //     v[j] = temp;
    //     i++;
    //     j--;
    // }

    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
     
}