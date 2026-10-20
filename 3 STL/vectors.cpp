#include <iostream>
#include <vector>
using namespace std;

void Vector()
{
    vector<int> v;
    v.push_back(1); //creates a temporary copy of the value and then appends into vector
    v.emplace_back(2); //directly appends into the vector
    
    //Pair Insertion
    vector<pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(1,2);

    //Iterators
    vector<int>::iterator it = v.begin(); //gives the address of the first element of vector
    cout << *it; //Dereferencing

    //For Loops using Iterators
    for(auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << endl;
    }
    //OR
    for(auto it : v)
    {
        cout << it << endl;
    }

    //Insertion
    vector<int> v1 = {10,20,30};
    v1.insert(v1.begin(),0);//inserts 0 before 10
    //multiple insertion
    v1.insert(v1.begin() + 1/*position*/,2/*how many times*/,5/*what number to be inserted*/);
    for(auto it : v1)
    {
        cout << it << endl;
    }

    //Deletion
    v1.erase(v.begin() + 1);
    //multiple deletion
    v1.erase(v.begin(),v.begin() + 2);
    for(auto it : v1)
    {
        cout << it << endl;
    }

}

int main()
{
    Vector();
    return 0;
}