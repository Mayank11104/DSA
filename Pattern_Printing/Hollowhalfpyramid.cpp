#include <iostream>
using namespace std;

void Hollowhalfpyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if (j == 0 || i == n - 1 || i == j)
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
    Hollowhalfpyramid(n);
    return 0;
}