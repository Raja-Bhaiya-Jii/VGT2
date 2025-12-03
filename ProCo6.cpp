// Programe for sort in assending order , Largest, Second Largest, Smallest element of an array.

#include<iostream>
using namespace std;
int main()
{
    int i, j, k, a[5], b[5];
    
    // Input of an array.
    for ( i = 0; i < 5; i++)
    {
        cout << "Enter element:- ";
        cin >> a[i];
    }
    
    /*// Sort in assending order.
    
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5-1; j++)
        {
            if (a[j] > a[j+1])
            {
               k = a[j+1];
               a[j+1] = a[j];
               a[j] = k; 
            }
            
        }
        
    }
     cout << "Largest element :- " << a[4] << "\n";
    cout << "Second Largest element :- " << a[3] << "\n";
    cout << "Smallest element :- " << a[0] << "\n";*/

    // Sort in decending order.
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5-1; j++)
        {
            if (a[j] < a[j+1])
            {
               k = a[j+1];
               a[j+1] = a[j];
               a[j] = k; 
            }
            
        }
        
    }
    
    // Output of an array.
    for ( i = 0; i < 5; i++)
    {
        cout << a[i] << "\n";
    }
    cout << "Largest element :- " << a[0] << "\n";
    cout << "Second Largest element :- " << a[1] << "\n";
    cout << "Smallest element :- " << a[4] << "\n";
    return 0;
    
    
    
}