#include<iostream>
using namespace std;
void display(int a[]){
    for(int i = 0; i<5; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

}
void change(int b[]){
    b[2] = 100;
}
int main(){
    int arr[] = {1,3,5,3,2};
    display(arr);
    change(arr);
    display(arr);
}