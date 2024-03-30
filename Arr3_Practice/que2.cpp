#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;

    int i = 0;
    int j = v.size() - 1;

    // int noo = 0;
    // int noz = 0;
    // for(int i = 0; i<v.size(); i++){
    //     if(v[i]==0) noz++;
    //     else noo++;
    // }

    // for(int i = 0; i<v.size(); i++){
    //     if(i<noz) v[i] = 0;
    //     else v[i] = 1;
    // }

    while (i < j)
    {
        if (v[i] == 1 && v[j] == 0)
        {
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
        else if (v[i] == 0)
        {
            i++;
        }

        else if (v[j] == 1)
        {
            j--;
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}