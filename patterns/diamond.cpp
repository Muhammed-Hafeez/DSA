#include <iostream>
using namespace std;
void Triangle(int N)
{
    for (int i = 1; i < N; i++)
    {
        for (int space = (N - i) - 1; space >= 0; space--)
        {
            cout << " ";
        }

        for (int rightT = 1; rightT <= i; rightT++)
        {
            cout << "*";
        }
        for (int Inverse = 2; Inverse <= i; Inverse++)
        {
            cout << "*";
        }

        cout << endl;
    }
}
void InverseTriangle(int N)
{
    for (int i = 1; i <= N; i++)
    {
        for (int space = 2; space <= i; space++)
        {
            cout << " ";
        }
        for (int upside_down = (N - i) - 1; upside_down >= 0; upside_down--)
        {
            cout << "*";
        }
        for (int inverse = (N - i); inverse >= 0; inverse--)
        {
            cout << "*";
        }

        cout << endl;
    }
}
void diamond(int N)
{
    Triangle(N);
    InverseTriangle(N);
}
int main()
{
    cout << endl;
    diamond(10);
    cout << endl;
    return 0;
}