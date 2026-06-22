#include <bits/stdc++.h>
using namespace std;
bool pal(  string str  ,int i)
{
    if ( i > str.size()-i-1 ) 
    return true;
    if ( str[i] != str[str.size() -i-1]) 
       return false ;

 
     return pal( str, i+1);

}

int main()
{
    
    string str ;

    cin >> str ;

    if (pal(str, 0)) 
        cout << "true";
     else cout << "false";

    return 0;


   
}
