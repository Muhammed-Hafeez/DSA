#include <iostream>
using namespace std;

void charTriangle(int N)
{
    char c = 64;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << char(c + j) << " ";
        }
        cout << endl;
    }
}
void charTriangleInverse(int N)
{
    char c = 64;
    for (int i = N; i >= 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << char(c + j) << " ";
        }
        cout << endl;
    }
}
void charTriangleCol(int N)
{
    char c = 64;
    for (int i = 0; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << char(c + i) << " ";
        }
        cout << endl;
    }
}

void FullCentricTriangle(int N)
{
    for (int i = N - 1; i >= 0; i--)
    {
        for (int space = 1; space <= i; space++)
        {
            cout << " ";
        }
        for (int first = 1; first <= (N - i); first++)
        {
            cout << char(64 + first);
        }
        for (int second = (N - i - 1); second >= 1; second--)
        {
            cout << char(64 + second);
        }

        cout << endl;
    }
}
void sleepLineTriangle(int N)
{
    for (int i = N - 1; i >= 0; i--)
    {
        for (int j = N - i - 1; j >= 0; j--)
        {
            cout << char(64 + N - j);
        }
        cout << endl;
    }
}
int main()
{

    charTriangle(5);
    cout << endl;
    charTriangleInverse(5);
    cout << endl;
    charTriangleCol(5);
    cout << endl;
    FullCentricTriangle(5);
    cout << endl;
    sleepLineTriangle(6);
    return 0;
}