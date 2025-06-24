#include <iostream>
using namespace std;

void Inverhollowhalfypramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (i == 0 || i == n - 1 || j == 0 || (i + j == n - 1))
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Enter no of rows :";
    cin >> n;
    Inverhollowhalfypramid(n);
    return 0;
}
