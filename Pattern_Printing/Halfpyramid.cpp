#include <iostream>
using namespace std;

void Halfpyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Enter no of rows :";
    cin >> n;
    Halfpyramid(n);
    return 0;
}