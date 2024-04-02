#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(2);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);

    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    int noz = 0;
    int noo = 0;
    int ntw = 0;

    for(int i = 0; i<v.size(); i++){
        if(v[i]==0){
            noz++;
        }
        else if(v[i]==1){
            noo++;
        }else{
            ntw++;
        }
    }
    
    for(int i = 0; i<v.size(); i++){
        if(i<noz) v[i] = 0;
        else if(i<(noz+noo)) v[i] = 1;
        else v[i] = 2;
    }
    
    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    
}