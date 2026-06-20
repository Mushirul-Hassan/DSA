#include <bits/stdc++.h>
using namespace std;
void printName(string name, int count, int n)
{
    
    if ( count == n)
        return ;

    cout << name << endl;
    printName(name, count + 1, n);

}

int main()
{
    string name;
    int n;

    cin >> name >> n;

    printName(name, 0 , n);

    return 0;
   
}
