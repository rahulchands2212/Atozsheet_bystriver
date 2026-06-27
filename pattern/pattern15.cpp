#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter n : ";
    cin >> n;

    // for (int i = n; i > 0; i--)
    // {
    //     for (char ch = 'A'; ch < 'A' + i; ch++)
    //     {
    //         cout << ch;
    //     }

    //     cout << endl;
    // }

    for(int i=0;i<n;i++){
     
    for(char ch='A';ch<='A'+n-1-i;ch++){
        cout<<ch;
    }
   
    cout<<endl;
}

    return 0;
}