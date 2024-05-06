#include<iostream>
#include<string>
using namespace std;
int main(){
//     string str = "12345";
//     int newStr = stoi(str);
//     cout<<newStr;

        string arr[] = {"0012","0123","190","342","002908","0001","1234"};

        int max = stoi(arr[0]);

        for(int i = 1; i<7; i++){
            int x = stoi(arr[i]);
            if(x>max) max = x; 
        }
        cout<<max;
}