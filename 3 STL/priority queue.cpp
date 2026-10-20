#include <iostream>
#include <queue>
using namespace std;

void priority(){
    priority_queue<int> pq;
    pq.push(5);
    pq.push(2); //since 2 is less than 5 it will be behind 5
    pq.push(10); // since 10 is larger than 10 it will be ahead of 5
    pq.push(8); //since 8 is larger than 5 but smaller than 10 it will be inserted in between those 2
    //final queue {10,8,5,2}

    cout << pq.top(); //prints 10
    pq.pop();
    cout << pq.top(); //prints 8

    //Minimum Heap/Minimum priority Queue
    priority_queue<int, vector<int>> pq;
    pq.push(5);
    pq.push(2); //since 2 is less than 5 it will be ahead of 5 cuz of min heap
    pq.push(10); // since 10 is larger than 10 it will be behind 5
    pq.push(8); //since 8 is larger than 5 but smaller than 10 it will be inserted in between those 2
    //final min queue {2,5,8,10}
    pq.top(); //prints 2
}

int main()
{
    priority();
    return 0;
}