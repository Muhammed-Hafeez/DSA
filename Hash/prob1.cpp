
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> arr = {2, 3, 2, 3, 5};
    vector<int> auxilary = {};
    unordered_map<int, int> hash;
    for (int i = 0; i < arr.size(); i++)
    {
        hash[arr[i]]++;
        cout << arr[i] << endl;
    }
    for (int i = 1; i <= arr.size(); i++)
    {
        auxilary.push_back(hash[i]);
    }
    return 0;
}
