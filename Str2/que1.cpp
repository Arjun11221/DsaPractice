#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter String : ";
    cin>>s;
    int count = 0;

    for(int i = 0; i<s.length(); i++){
        if(s.length()==1){
            break;
        }
        else if(s[i]!=s[i+1] && s[i]!=s[i-1]) count++;

        else if(i == 0) {
            if(s[i]!= s[i+1]) count++;
        }
        else if(i == s.length()-1){
            if(s[i]!=s[i-1]) count++;
        }
    }
    cout<<count;
}