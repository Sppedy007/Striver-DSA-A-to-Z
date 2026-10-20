#include <iostream>
#include <list>
using namespace std;

void LIST(){
    //List are essentially Doubly Linked List
    //Meaning that elements can be inserted at the start before the first element
    //Vectors are Single Linked List and elements can only by inserted after the already existing elements
    //Other than that Vector and Lists Are Same

    list<int> ls = {1,2,3,4};
    ls.push_front(5);
    ls.emplace_front(10);

    
    ls.pop_front();

    for(auto it: ls)
    {
        cout << it << endl;
    }
}

int main()
{
    LIST();
    return 0;
}