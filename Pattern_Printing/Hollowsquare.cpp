#include <iostream>
using namespace std;

void Hollowsquare(int a)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (i == 0 || i == a - 1)
            {
                cout << "* ";
            }
            else
            {
                // i==j for diagonal
                if (j == 0 || j == a - 1 || i == j)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }
}
int main()
{
    int a;
    cout << "Enter side:";
    cin >> a;
    Hollowsquare(a);

    return 0;
}