#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "A man, a plan, a canal: Panama";
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    string as;
    for (int i : s)
    {
        if (isalpha(i))
        {
            as += i;
        }
    }

    s=as;

    cout << s;
    return 0;
}