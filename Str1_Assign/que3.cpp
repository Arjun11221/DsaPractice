#include<iostream>
using namespace std;
int main(){
    string str = "12321";

    int i = 0;
    int j = str.length()-1;
    bool flag = true;
    while(i<=j){
        if(str[i] != str[j]){
            flag = false;
            break;
        }
        i++;
        j--;
    }

    if(flag == false){
        cout<<"String isn't Palindrome";
    }else{
        cout<<"String is Palindrome";
    }

}