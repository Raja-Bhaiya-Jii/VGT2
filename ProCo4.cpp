// Program for sum & average of elements in array.

#include<iostream>
using namespace std;
int main()
{
    int i, n = 0, a[10];
    for ( i = 0; i < 10; i++)
    {
        cout << "Enter: ";
        cin >> a[i];
    }
    for ( i = 0; i < 10; i++)
    {
        n += a[i];
    }
    cout <<"Sum of an array is :- " << n << "\n";
    cout << "Average of an array is :- " << n/10 ;
    return 0;
    
}