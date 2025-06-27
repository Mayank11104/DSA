#include <iostream>
using namespace std;

void butterflypattern(int n)
{
    int it = 2 * n;
    for (int i = 0; i < it; i++)
    {
        if (i <= n)
        {
            for (int j = 0; j < it; j++)
            {
                if (j <= i || j >= it - i - 1)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        else
        {
            for (int j = 0; j < it; j++)
            {
                if (j >= i || j <= it - i - 1)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
}
int main()
{

    int n;
    cout<<"enter n : ";
    cin >> n;
    butterflypattern(n);

    return 0;
}