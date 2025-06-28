#include <iostream>
using namespace std;

void Pascalstriangle(int n)
{
    for (int i = 1; i < n; i++)
    {
        int k = 1;
        for (int j = 1; j <= i; j++)
        {
            cout << k << " ";
            // pascal's eqn
            k = k * (i - j) / j;
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Enter n :";
    cin >> n;
    Pascalstriangle(n);
    return 0;
}