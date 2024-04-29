#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string str = "abcdef";
    cout<<str<<endl;

    int n = str.length();

    reverse(str.begin()+1,str.end()-1);

    cout<<str<<endl;

}