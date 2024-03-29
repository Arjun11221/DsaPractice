#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(4);
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);

    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    int i = 0;
    int j = v.size()-1;

    bool flag = true;

    while(i<j){
        if(v[i]!=v[j]){
            flag = false;
            break;
        }
        i++;
        j--;
    }
    
    if(flag==true) cout<<"Array is Palindrome";
    else cout<<"Array isn't Palindrome";
    
   
   
}