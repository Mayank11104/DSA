#include <iostream>
using namespace std;

void Invertednumberspyramid(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << j + 1;
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Enter highest number : ";
    cin >> n;

    Invertednumberspyramid(n);
    return 0;
}