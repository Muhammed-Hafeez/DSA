#include <bits/stdc++.h>
using namespace std;
int main()
{

    map<int, int> m1;
    m1.insert({1, 23});
    m1.insert({2, 12});
    m1.insert({4, 36});
    m1.insert({3, 10});
    for (auto i : m1)
    {
        cout << i.second << " ";
    }
    cout << endl;

    // multimap and unordered_map are similar to set variations
    return 0;
}