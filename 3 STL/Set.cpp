#include <iostream>
#include <set>
using namespace std;

void SET()
{
    //Set stores everything in sorted order and every element must be unique
    set<int> st;
    st.insert(2); //{2}
    st.insert(1); //{1,2}
    st.insert(2); //{1,2} Doesnt add another 2 as it is already in the set
    st.insert(4); //{1,2,4}
    st.insert(3); //{1,2,3,4}
    
    auto it = st.find(3); // gives address of 3
    auto it = st.find(6); //if given a number that is not in the set, the iterator gets address of st.end() or address after the last element

    st.erase(4); //erases 4 //TC is log n

    int cnt = st.count(1); //since set only takes unique values this will either give 1 or 0

    //you can use iterators to erase elements too
    auto it = st.find(2);
    st.erase(it); //{1,3}

    st.insert(2);
    st.insert(4);
    auto it1 = st.find(2);
    auto it2 = st.find(3);
    st.erase(it1/*start*/,it2/*end*/);


}

void MULTI()
{
    //it also stores duplicate elements
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1); //{1,1}
    ms.insert(1); //{1,1,1}
    ms.insert(1); //{1,1,1,1}

    ms.erase(1); //erases all 1

    int cnt = ms.count(1); //can give values other than 0 and 1

    ms.erase(ms.find(1)); //only a single one will be erased
    ms.erase(ms.find(1), next(ms.find(1),2));

}

int main()
{
    SET();
    MULTI();
    return 0;
}