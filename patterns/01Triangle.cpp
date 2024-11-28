#include <iostream>
using namespace std;

void Triangle01(int N)
{
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {

            cout << ((i + j) % 2 == 0);
        }
        cout << endl;
    }
}
int main()
{
    Triangle01(5);
    return 0;
}