#include <iostream>
using namespace std;

void ReverseTriangle(int N)
{
    for (int i = 0; i < N; i++)
    {
        // for spaceing
        for (int space = 1; space <= i; space++)
        {
            cout << " ";
        }
        // for inverse triangle
        for (int inverse = N; inverse >= i+1; inverse--)
        {
            cout << "*";
        }
        // for second inverse triangle
        for (int sec_inverse = N-2; sec_inverse >= i; sec_inverse--)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    cout << endl;
    ReverseTriangle(15);
    cout << endl;
    return 0;
}