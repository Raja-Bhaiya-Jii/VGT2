// Program for reverse a array.

#include<iostream>
using namespace std;
int main ()
{
    int i,n;
    char a[10], b[10];
    cout << "Enter a string :- ";
    for(i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    n = 10;
    for ( i = 0; i < 10; i++)
    {
        b[n-1] = a[i];
        n--;
    }
    for( i = 0; i < 10; i++)
    {
        cout << b[i];
    }
    b[n] = '\0';
    return 0;
    
}