#include <bits/stdc++.h>
using namespace std;

class Solution
{
    int greatestCommonDevisor(int a, int b)
    {
        if (a == 0)
        {
            return b;
        }
        else if (b == 0)
            return a;
        else if (a > b)
            return greatestCommonDevisor(a % b, b);
        else if (b > a)
            return greatestCommonDevisor(a, b % a);
        else
        {
            return greatestCommonDevisor(a % b, b);
        }
    }

public:
    vector<int> lcmAndGcd(int a, int b)
    {
        int gcdVal = this->greatestCommonDevisor(a, b);
        int lcmVal = (a * b) / gcdVal;
        vector<int> v = {lcmVal,gcdVal};
        return v;
    }
};

int main()
{
    Solution solution;
    vector <int > v = solution.lcmAndGcd(12,18);
    cout << v[0] << " " << v[1] << endl;
    return 0;
}
