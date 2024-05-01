#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string str = "arjundev";
    int n = str.length();

    reverse(str.begin()+n/2,str.end());

    cout<<str;

}