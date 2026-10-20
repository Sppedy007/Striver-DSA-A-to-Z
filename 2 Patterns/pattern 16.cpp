#include <iostream>
using namespace std;
void pattern14(int n)
{
    for(int i = 0; i < n;i++)
    {
        for(int j = 0; j <= i; j++)
        {
            cout << char(65 + i) << " ";
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