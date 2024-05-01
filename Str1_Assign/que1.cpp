#include<iostream>
using namespace std;
int main(){
    string str = "arjundev";

    for(int i = 0; i<str.length(); i++){
        if(i%2!=0) str[i] = '#';
    }

    cout<<str;

}