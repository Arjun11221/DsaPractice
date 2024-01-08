#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    int arr[n];
    cout<<"Enter Array's Element : ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    int evenSum = 0;
    int oddSum = 0;

    for(int i = 0; i<n; i++){
        if(i%2==0){
            evenSum += arr[i];
        }
        else {
            oddSum += arr[i];
        }
    }

    int sum = evenSum - oddSum;
    cout<<sum;
}