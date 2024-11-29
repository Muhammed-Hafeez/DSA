#include<bits/stdc++.h>
using namespace std;
int main(){

    list<int> l;//similar to vector but also includes front operations which are less costly
    l.push_back(1);
    l.emplace_back(2);
    l.push_front(0);
    l.emplace_front(-1);
    for (auto i : l)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}