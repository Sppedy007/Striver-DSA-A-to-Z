#include <iostream>
using namespace std;

void pattern2(int n){
    for(int i = 0; i < n; i++)
    {
        for(int k = n-1; k > i; k--)
        {
            cout << " ";
        }
        for(int j = 1; j <=2*i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main(){
    int t;
    cin >> t;
    pattern2(t);
    return 0;
}