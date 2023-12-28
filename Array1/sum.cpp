#include<iostream>
using namespace std;
int main(){
  int arr[5] = {1,5,3,8,9};
  int sum = 0;
  for(int i = 0; i<5; i++){
    sum += arr[i];
  }
  cout<<sum;
}