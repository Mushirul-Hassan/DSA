#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int n)
{
    int rev = 0;
    int dup = n;
    while (n > 0)
    {
        int lst = n % 10;
        rev = (rev * 10) + lst;
        n = n / 10;
    }
   return rev == dup;
}

int main()
{
    int n;
    cin >> n;
     if (isPalindrome(n))
        cout << "true";
    else
        cout << "false";
}
