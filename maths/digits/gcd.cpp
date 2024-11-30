#include <bits/stdc++.h>
using namespace std;

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
    else{
        return greatestCommonDevisor(a % b, b);
    }
}
int main()
{
    int gcd = greatestCommonDevisor(50, 100);
    cout << gcd << endl;
    return 0;
}