// Program for show GCD of two numbers using function.

#include<iostream>
using namespace std;

int GCD(int a, int b)
{
    int i, s, k, n, gc;
    for ( i = 1, s = 1; i <= a, s <= b ; i++, s++)
    {
        if (a%i == 0)
        {
            k = i;
        }
        if (b%s == 0)
        {
            n = s;
        }
        
        if (n == k)
        {
          gc = n;
        }
    
        
    }
    return gc;
}

int main()
{
    int a,b;
    cout << "Enter A: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << GCD(a,b);
    return 0;
}