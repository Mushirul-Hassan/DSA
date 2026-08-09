#include <bits/stdc++.h>
using namespace std;
int rmvDup(int arr[], int n)
{
    int i = 0;
    int j = i+1;
    while (j < n)
    {
        if (arr[j] == arr[i])
        {
            j++;
       }else{
        swap(arr[i+1], arr[j]);
        i++;
        j++;
           }
    }
    return i + 1;
}


int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    rmvDup(arr, n);
for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
 

    return 0;
}

// we have to check the current element with the previous one, if they are same we will move forward and if they are different we will swap the current element with the next position of the last unique element. In the end we will return the count of unique elements.