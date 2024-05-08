#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s = "ABXWYZJGXYZXQW";
    string str = "";

    for(int i = 0; i<s.length(); i++){
        if(s[i] >= 'X') {
            str.push_back(s[i]);
        }
    }

    for(int i = 0; i<str.length(); i++){
        bool flag = true;
        for(int j = 0; j<str.length()-1; j++){
            if(str[j]>str[j+1]){
                int temp = str[j];
                str[j] = str[j+1];
                str[j+1] = temp;
                flag = false;
            }
        }
        if(flag == true) break;
    }
    cout<<str;
}