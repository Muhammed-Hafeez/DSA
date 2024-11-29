#include<bits/stdc++.h>
using namespace std;
int main(){

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.emplace(4);

    //stacks top element
    cout << st.top() << endl;
    st.size(); //size of stack
    st.pop(); //removes and gives 4 from st
    stack<int> st2;
    st.swap(st2); //swaps st and st2
    cout << st.empty() << endl;//true
    return 0;
}