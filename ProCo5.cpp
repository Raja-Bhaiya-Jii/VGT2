// Program for check array is palidrome OR not.

#include<iostream>
using namespace std;
int main()
{
    int i, k, n;
    char a[5], b[5];
    cout << "Enter elements:- ";
    for( i = 0; i < 5; i++ )
    {
        cin >> a[i];
    }
    n = 5;
    for ( i = 0; i < n; i++)
    {
        b[n-1-i] = a[i];
        
    }
    a[n] = '\0';
    for ( i = 0; i < 5; i++)
    {
        k = b[i] - a[i];
        if ( k != 0)
        {
            cout << " Array is not Palidrome.";
            break;
        }
        
    }
    if (k == 0)
    {
        cout << " Array is Palidrome.";
    }
    

    return 0;
    
    
} 
