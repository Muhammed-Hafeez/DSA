#include <bits/stdc++.h>
using namespace std;
int main()
{

    set<int> s; // sorted and only accepts unique elements;
    s.insert(1);
    s.insert(4);
    s.insert(2);
    s.emplace(10);

    cout << *(s.find(4)) << endl; // returns 4;
    set<int>::iterator lastElem = s.find(11);
    lastElem--;
    cout << *lastElem << endl; // returns s.end() - 1;
    s.erase(10);               // removes 10
    s.empty();                 // Returns true if the set is empty.
    cout << s.max_size() << endl;
    cout << s.size() << endl;
    cout << s.count(9) << endl;
    for (auto &&i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    //upper and lower bound
    set<int> last_set;
    last_set.insert(1);
    last_set.insert(4);
    last_set.insert(2);
    last_set.emplace(10);
    cout << *(last_set.upper_bound(4)) << endl;//10
    cout << *(last_set.lower_bound(2)) << endl; // 2
    // multiset only obeys the sorted property elements can be of same value in this set
    // syntax:
    multiset<int>
        mset;
    // unordered_set only obeys the unique property elements can be mixed in this set
    // syntax:
    unordered_set<int> uset;
    return 0;
}