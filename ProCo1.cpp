// Program for addition & multiplication of two matrix.

#include<iostream>
using namespace std;
int main()
{
    int a[2][2], b[2][2], c[2][2], i, j, k;
   
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            c[i][j] = 0;
        }
        
    }
    
    // For input of matrix A.
    
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            cout << "Enter element of A:- ";
            cin >> a[i][j];
        }
        
    }
    
    //for input of matrix B.
    
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            cout << "Enter element of B:- ";
            cin >> b[i][j];
        }
        
    }

    /*// Addition of Both the matrix.

    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
           c[i][j] = a[i][j] + b[i][j];
        }
        
    }
     
    // Output of addition of both the matrix.

    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            cout << c[i][j] << '\t';
        }
       cout << " " << endl ; 
    }*/

    // Multiplication of both the matrix.

    for( i = 0 ; i < 2 ; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            for ( k = 0; k < 2; k++)
            {
             c[i][j] += a[i][k] * b[k][j];
            }
          
        }
        
    }

    // Output of multiplication of both matrix.

    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            cout << c[i][j] << '\t';
        }
       cout << " " << endl ; 
    }
    return 0;
}