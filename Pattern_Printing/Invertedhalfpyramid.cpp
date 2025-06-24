#include <iostream>
using namespace std;

void Invertedhalfpyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Enter no of rows :";
    cin >> n;
    Invertedhalfpyramid(n);
    return 0;
}