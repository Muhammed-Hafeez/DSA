#include<iostream>
using namespace std;

int fibo(int n){
   if(n <= 1){
       return n;
   }
   int l = fibo(n - 1);
   int ls = fibo(n - 2);
   return l + ls;
}

int main(){

    cout << fibo(4) << endl;
    return 0;
}