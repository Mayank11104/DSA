#include <iostream>
using namespace std;

void Numerichollowpyramid(int n)
{
    int c = n - 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if (i == j || j == 0 || i == c)
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
    Numerichollowpyramid(n);

    return 0;
}