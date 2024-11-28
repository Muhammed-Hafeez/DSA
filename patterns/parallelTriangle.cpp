#include <iostream>
using namespace std;

void ParallelTriangle(int N)
{
    for (int i = 1; i <= N; i++)
    {
        for (int first = 1; first <= i; first++)
        {
            cout << first;
        }
        // for spacing
        for (int space = (N - i) * 2; space >= 1; space--)
        {
            cout << " ";
        }
        // second
        for (int second = i; second >= 1; second--)
        {
            cout << second;
        }
        cout << endl;

    }
}
int main()
{
    ParallelTriangle(5);
    return 0;
}