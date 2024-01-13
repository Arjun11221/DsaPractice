#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(2);
    v1.push_back(7);

    vector<int> v2;
    v2.push_back(4);
    v2.push_back(8);
    v2.push_back(2);
    v2.push_back(5);
    v2.push_back(7);
    v2.push_back(1);

    int n = v1.size();
    int m = v2.size();

    vector<int> v3(m+n);
    int k = v3.size();
    
    for(int i = 0; i<k; i++){
        cout<<v3[i]<<" ";
    }

}