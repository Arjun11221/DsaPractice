#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter Size of Array: ";
  cin>>n;

  int arr[n];

  cout<<"Enter Array's Element: ";

  for(int i = 0; i<n; i++){
    cin>>arr[i];
  }
  
  int max = -1;

  for(int i = 0; i<n; i++){
    if(max<arr[i]) max = arr[i];
  }
  cout<<max;

}