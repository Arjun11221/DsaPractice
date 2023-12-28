#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of Students : ";
    cin>>n;

    int marks[n];

    cout<<"Enter the marks of the students : ";

    for(int i = 0 ; i<n; i++){
        cin>>marks[i];
    }

    for(int i = 0; i<n; i++){
        if(marks[i]<35){
            cout<<"The Rollno is "<< i <<endl;
        }
    }
}