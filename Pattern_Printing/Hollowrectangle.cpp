#include <iostream>
using namespace std;

void Hollowrectangle(int length, int width)
{
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (i == 0 || i == length - 1)
            {
                cout << "* ";
            }
            else
            {
                if (j == 0 || j == width - 1)
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

    int length, width;
    cout << "Enter length : ";
    cin >> length;
    cout << "Enter width : ";
    cin >> width;
    Hollowrectangle(length, width);

    return 0;
}
