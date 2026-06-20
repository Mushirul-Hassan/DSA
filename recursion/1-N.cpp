#include <bits/stdc++.h>
using namespace std;
void printN(int count , int n)
{
    
    if ( count > n)
        return ;

    cout << count << endl;
    printN(count + 1, n);

}

int main()
{
    int n;

    cin >> n ;

    printN( 1, n);

    return 0;
   
}
