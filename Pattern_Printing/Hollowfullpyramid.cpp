#include <iostream>
using namespace std;

void Hollowfullpyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < i + 1; k++)
        {
            if (i == 0 || i == n - 1 || k == 0 || k == i)
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
    cout << "Enter n : ";
    cin >> n;
    Hollowfullpyramid(n);
    return 0;
}