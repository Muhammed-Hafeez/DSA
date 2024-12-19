#include <bits/stdc++.h>
using namespace std;
vector<int> frequencyCount(vector<int> &arr)
{
    map<int, int> hash;
    vector<int> aux;
    for (int i = 0; i < arr.size(); i++)
    {
        hash.emplace(arr[i], hash[arr[i]]++);
    }

    for (int i = 1; i < arr.size(); i++)
    {
        aux.emplace_back(hash[i]);
    }

    return aux;
}
int main()
{

    vector<int> v = {9, 9, 0, 0, 1, 1, 5, 5, 1, 2, 2};
    vector<int> frequency = frequencyCount(v);
    for (int i = 0; i < frequency.size(); i++)
    {
        cout << frequency[i] << endl;
    }
    
    // map<int, int> m;
    // m.emplace(100, 404);
    // for (int i = 0; i < 200; i++)
    // {
    //     cout << "enter a number ";
    //     int n;
    //     cin >> n;
    //     cout << "output " << m[n] << endl;
    // }

    return 0;
}