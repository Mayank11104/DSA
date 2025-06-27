#include <iostream>
using namespace std;

void fancypattern2(int n)
{
    int inc = 1;
    int num = 1;
    for (int i = 0; i < n; i++)
    {

        int count = i + 1;
        int index = 0;

        for (int j = 0; j < inc; j++)
        {
            if (j == index && count > 0 && i < n)
            {
                cout << num;
                num++;
                index += 2;
                count--;
            }

            else
            {
                cout << "*";
            }
        }
        inc = inc + 2;

        cout << endl;
    }
    int start = num - n;
    for (int i = 0; i < n; i++)
    {
        int key = start;
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << key;
            key++;
            if (j < n - i - 1)
            {
                cout << "*";
            }
        }
        start = start - (n - i - 1);
        cout << endl;
    }
}
int main()
{
    int n;
    cout<<"enter n : ";
    cin >> n;

    fancypattern2(n);
    return 0;
}