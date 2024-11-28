#include <iostream>
using namespace std;

void StarTriangle()
{
    int N = 5;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void NumTriangle()
{
    int N = 5;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void NumRowTriangle(int N)
{
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}

void ReverseTriangle(int N)
{
    for (int i = N; i >= 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void NumReverseTriangle(int N)
{
    for (int i = N; i >= 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void continuousNumTriangle(int Num)
{
    int a = 1;
    for (int i = 1; i <= Num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << a << " ";
            a++;
        }
        cout << endl;
    }
}
int main()
{
    StarTriangle();
    cout << endl;
    NumTriangle();
    cout << endl;
    NumRowTriangle(5);
    cout << endl;
    ReverseTriangle(5);
    cout << endl;
    NumReverseTriangle(5);
    cout << endl;
    continuousNumTriangle(5);
    return 0;
}
