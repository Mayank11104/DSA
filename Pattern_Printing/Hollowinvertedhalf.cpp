#include <iostream>
using namespace std;

void Hollowinvertedhalf(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (j == i || j == n - 1 || i == 0)
            {
                cout << j + 1;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;

    Hollowinvertedhalf(n);

    return 0;
}