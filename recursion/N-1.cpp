#include <bits/stdc++.h>
using namespace std;
void printN(int count)
{
    
    if ( count == 0)
        return ;

    cout << count << endl;
    printN(count - 1);

}


int main()
{
    int n;

    cin >> n ;

    printN(n);

    return 0;
   
}
