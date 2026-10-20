#include <iostream>
#include <queue>
using namespace std;

void QUEUE()
{
    queue<int> q;
    q.push(2); //{2}
    q.push(4); //{2,4}
    q.push(5); //{2,4,5}
    q.emplace(10); // {2,4,5,10}

    q.back() += 5; //{2,4,5,15}
    cout << q.back() << endl; //gives 15

    cout << q.front() << endl; //gives 2

    q.pop();//{4,5,15}
    cout << q.front() << endl; //gives 4

}

int main()
{
    QUEUE();
    return 0;
}