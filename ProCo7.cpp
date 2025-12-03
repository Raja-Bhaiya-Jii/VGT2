// Program of Factroial of a number.

#include <iostream>
using namespace std;

int main() 
{
    int n, Fac = 1;
    cout << "Enter Number:- ";
    cin >> n;
   while (n > 0)
   {
    Fac *= n;
    n--;
   }
   
   cout << "Factroial is:- " << Fac;    
    return 0;
}
