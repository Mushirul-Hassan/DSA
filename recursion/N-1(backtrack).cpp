#include <bits/stdc++.h>
using namespace std;
void printN(int count, int n)
{
    
    if ( count > n)
        return ;

        printN(count + 1, n);
    cout << count << endl;
    

}


int main()
{
    int n;

    cin >> n ;

    printN(1, n);

    return 0;
   
}
