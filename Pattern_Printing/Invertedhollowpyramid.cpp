#include <iostream>
using namespace std;

void Invertedhollowpyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < n - i; k++)
        {
            if (i == 0 || i == n - 1 || k == 0 || k == n - i - 1)
                cout << "* ";
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
    Invertedhollowpyramid(n);
    return 0;
}