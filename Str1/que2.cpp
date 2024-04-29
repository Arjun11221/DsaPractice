#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string str = "Arjun";
    cout<<str<<endl;

    // Length/Size of the String

    // int len = str.size();
    // int len = str.length();
    // cout<<len<<endl;

    // push_back or pop_back method of the String

    // str.push_back(' ');
    // str.push_back('k');
    // str.push_back('u');
    // str.pop_back();
    // str.pop_back();
    // str.pop_back();

    // cout<<str;

    // + operator

    // str = str + " dev";
    // cout<<str;

    // reverse method

    reverse(str.begin(),str.end()-2);

    cout<<str;

}