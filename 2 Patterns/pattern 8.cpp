#include <iostream>
using namespace std;

void pattern8(int n){
    for(int i = 0; i < n; i++)
    {
        for(int k = 0; k < i; k++)
        {
            cout << " ";
        }
        for(int j = 0; j < 2*n - (2*i + 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main(){
    int t;
    cin >> t;
    pattern8(t);
    return 0;
}