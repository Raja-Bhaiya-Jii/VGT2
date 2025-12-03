// Program for check array is sorted OR not.

#include<iostream>
using namespace std;
int main()
{
    int a[10], i, j = 0;

    for( i = 0; i < 10; i++)
    {
        cout << "Enter:- ";
        cin >> a[i];
    }
    
     for( i = 0; i < 10; i++)
    {
        cout << a[i] << endl;
    }
    

    // For Check Array is sorted OR not.
    
    for( i = 0; i < 9; i++)
    {
       if ( a[i] > a[i+1])
       {
         j = j + 1;
       }
    }
    if( j != 0)
    {
        cout << "Array is not sorted in assending order.";
    }else
    {
        cout << "Array is sorted in assending order.";
    }
    
}