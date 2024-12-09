#include <iostream>
#include <string.h>
using namespace std;
bool palindrome(string s, int j, int i = 0)
{
   if(s[i] != s[j - i]){
       return false;
   }
       
   if(i > j/2)
       return true;
   return palindrome(s, j, i + 1);
}
int main()
{
    string s = "MadaM";
    palindrome(s , s.size()-1) ? cout << s << " is palindrome" : cout << s << " is not palindrome";
    cout << endl;
    return 0;
}