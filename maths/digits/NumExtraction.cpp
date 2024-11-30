#include<iostream>
using namespace std;
int main(){

    int N = 7769;
    int i = 0;
    while(N > 0){
        int last_digit = N % 10;
        cout << last_digit << " ";
        i++;
        N = N / 10;
    }
    cout << endl;
    cout << "Number of digits :" << i << endl;
    return 0;
}