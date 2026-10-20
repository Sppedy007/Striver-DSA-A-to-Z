#include <iostream>
#include <stack>
using namespace std;

void STACK()
{
    stack<int> st;
    st.push(1); //{1}
    st.push(2); //{2,1}
    st.push(3); //{3,2,1}
    st.push(5); //{5,3,2,1}

    cout << st.top(); //Gives 5
    st.pop(); //{3,2,1}
    cout << st.top(); //Gives 3
    cout << st.size(); //3 
    cout << st.empty(); //gives 0 if not empty

    //Swapping of Stack
    stack<int> st1, st2;
    st1.swap(st2);
}

int main()
{
    STACK();
    return 0;
}