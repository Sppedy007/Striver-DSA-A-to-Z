#include <iostream>
using namespace std;
void pattern14(int n)
{   
    for(int i = 0; i < n;i++)
    {
        for(int j = 0; j <= n - i - 1; j++)
        {
            cout << char(65 + j) << " ";
        }
        cout << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    pattern14(t);
    return 0;
}