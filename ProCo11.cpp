// Program for check number is Prime OR Not using function(user-define).

#include<iostream>
using namespace std;

int PRM(int a)
{
    int i, k = 0;
    for ( i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            k = k + 1;
        }
       
    }
    if (k == 2)
    {
        return 0;
    }else{
        return 1;
    }
    
}

int main()
{
    int a, k;
    cout << "Enter number: ";
    cin >> a;
    k = PRM(a);
    if (k == 0)
    {
        cout << a <<" is Prime."<< endl;
    }else{
        cout << a << " is not Prime." << endl;
    }
    return 0;
}