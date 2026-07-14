#include <bits/stdc++.h>
using namespace std;

/*
gcd(a,b) ---> gcd(a%b,b)         while(a>b);
 in sort   greater%smaler
 */
int main()
{
    int n1, n2;
    cout << "enter n1 and n2 : ";
    cin >> n1 >> n2;

    while (n1 > 0 && n2 > 0)
    {
        if (n1 > n2)
        {
            n1 = n1 % n2;
        }

        else
        {
            n2 = n2 % n1;
        }
    }

    if(n1==0){
        cout<<"gcd : "<<n2;
    }else{
        cout<<"gcd : "<<n1;
    }
    return 0;
}