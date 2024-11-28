#include <iostream>
using namespace std;
int main()
{

    int N = 15;
    int NumofTime = 1;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << NumofTime << " " << i << ' ' << j << endl;
            NumofTime++;
        }
    }

    // time complexity = O(n + (n * (n-1)/2)) = O(n^2)/2
    return 0;
}