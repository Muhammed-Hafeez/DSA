#include <bits/stdc++.h>
using namespace std;
int main()
{

    int N = 50;
    int i = 1;

    while (i <= pow(N,0.5))
    {
        if (N % i == 0)
        {
            cout << i << " ";
            if((N/i) != i){
                cout << N / i << " ";
            }
        }
        i++;
    }
    cout  << endl;

    return 0;
}