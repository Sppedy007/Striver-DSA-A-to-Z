#include <iostream>
using namespace std;

void pattern6(int n){
    for(int i = n; i >= 1; i--)
    {
        for(int j = 1; j <= i; j++)
        {  
            cout << j;
        }
        cout << endl;
    }
}

int main(){
    int t;
    cin >> t;
    pattern6(t);
    return 0;
}