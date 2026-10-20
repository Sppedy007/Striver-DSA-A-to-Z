#include <iostream>
using namespace std;

void pattern9(int n){
        for(int i = 0; i < n+1; i++)
        {
            for(int k = n; k > i; k--)
            {
                cout << " ";
            }
            for(int j = 1; j <=2*i + 1; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
    
        for(int i = 0; i < n; i++)
        {
            for(int k = 0; k <= i; k++)
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
    pattern9(t);
    return 0;
}