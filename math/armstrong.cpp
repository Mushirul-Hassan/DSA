#include <bits/stdc++.h>
using namespace std;

// int count(int n){
//     int cnt = 0;
//     while ( n> 0){
//         cnt += 1;
//         n = n /10;
//     }
//     return cnt;
// }

bool isArmstrong(int n)
{
   int dup = n;
   int  sum = 0;
   int digits = log10(n) + 1;
//    int digits = count(n);
    while (n > 0)
    {
        int lst = n % 10;
        sum +=  pow(lst, digits);
        n = n / 10;
    }
   return sum == dup;
}

int main()
{
    int n;
    cin >> n;
     if (isArmstrong(n))
        cout << "true";
    else
        cout << "false";
}
