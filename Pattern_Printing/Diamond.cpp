#include <iostream>
using namespace std;

void diamond(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < i + 1; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < n - i; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Enter no of rows :";
    cin >> n;
    diamond(n);
    return 0;
}