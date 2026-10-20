#include <iostream>
using namespace std;

void Pairs(){
    pair<int,int> p = {1,3};
    cout << p.first << " " << p.second << endl;

    //Nested Pairs
    cout << "NESTED PAIR\n";
    pair<int, pair<int,int>> s = {1,{2,3}};
    cout << s.first << " " << s.second.first << " " << s.second.second << endl;

    //array pair
    pair<int,int> arr[] = {{1,2}/*first element*/, {2,5}/*second element*/, {3,7}/*third element*/};
    cout << arr[1].second;
}

int main()
{
    Pairs();
    return 0;
}