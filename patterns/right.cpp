#include <iostream>
using namespace std;
void Right(int N)
{
    for (int i = 1; i <= N; i++)
    {
        for (int right = 1; right <= i; right++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = (N - i) - 2; j >= 0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    cout << endl;
    Right(15);
    cout << endl;
    return 0;
}