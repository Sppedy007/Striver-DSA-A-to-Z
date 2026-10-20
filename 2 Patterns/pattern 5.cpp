#include <iostream>
using namespace std;

void pattern5(int n){
    for(int i = n; i >= 1; i--)
    {
        for(int j = 1; j <= i; j++)
        {  
            cout << "*";
        }
        cout << endl;
    }
}

int main(){
    int t;
    cin >> t;
    pattern5(t);
    return 0;
}