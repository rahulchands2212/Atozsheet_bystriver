#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter n: ";
    cin >> n;

    //upper part
    for (int i = 0; i < n / 2; i++)
    {
        for (int k = 0; k < (n / 2) - 1 - i; k++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    //lower part
    for (int i = 0; i < n / 2; i++)
    {
        for (int k = 0; k < i; k++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * (n/2) - (2 * i + 1); j++)
        {
            cout << "*";
        }
        cout<<endl;
    }

    return 0;
}