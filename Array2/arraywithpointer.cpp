#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,3,5,3,2};
    int* ptr = arr;
    cout<<ptr<<endl;
    for(int i = 0; i<5; i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    cout<<endl;
    cout<<ptr;
}