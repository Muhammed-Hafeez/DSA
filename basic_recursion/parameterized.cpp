#include <bits/stdc++.h>
using namespace std;

int parameterized_factorial(int N, int i = 1, int aux = 1)
{
    if (i >= N + 1)
    {
        return aux;
    }
    return parameterized_factorial(N, i + 1, aux * i);
}
int main()
{

    cout << parameterized_factorial(6) << endl;
    return 0;
}