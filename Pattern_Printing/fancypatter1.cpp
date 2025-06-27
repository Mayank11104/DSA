#include <iostream>
using namespace std;

void fancypattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        int index = 8 - i;
        int num = i + 1;
        int count = num;

        for (int j = 0; j < 17; j++)
        {
            if (j == index && count > 0)
            {
                cout << i + 1;
                index += 2;
                count--;
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout<<"Enter n : ";
    cin >> n;
    fancypattern1(n);

    return 0;
}