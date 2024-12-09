#include<bits/stdc++.h>
using namespace std;
int main(){

    int N = 120;
    int reverse_num = 0;
    while (N != 0)
    {
        int last_digit = N % 10;
        reverse_num = (reverse_num * 10) + last_digit;
        N = N / 10;
    }
    cout << reverse_num << endl;

    return 0;
}