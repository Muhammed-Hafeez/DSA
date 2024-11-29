#include <bits/stdc++.h>
using namespace std;
int main()
{

    deque<int> q; // similar to vector and list but also includes front operations
    q.push_back(1);
    q.emplace_back(2);
    q.push_front(0);
    q.emplace_front(-1);
    for (auto i : q)
    {
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}