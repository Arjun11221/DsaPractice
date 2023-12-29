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
  int x;
  cout<<"Enter x: ";
  cin>>x;

  bool flag = false;    // element is not present

  for(int i = 0; i<n; i++){
    if(arr[i]==x) {
        flag = true;  // element is present
        break;
    }   

  }
  if(flag==true) cout<<"Element is present";
  else cout<<"Element isn't present";

}