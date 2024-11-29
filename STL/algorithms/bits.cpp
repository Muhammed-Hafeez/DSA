#include <bits/stdc++.h>
using namespace std;
int main()
{

    const int num = 6;
    cout << __builtin_popcount(num) << endl; // 110 = 2;
    long number = 1234567891;
    cout << __builtin_popcountll(number) << endl; // 13
  // string permutation
    string s = "abcd";
do
{
    cout << s << endl;
} while (next_permutation(s.begin(),s.end()));

//other
// max_element(a,b) min_element(a,b) 

    return 0;
}