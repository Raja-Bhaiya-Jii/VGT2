// A program of create stack.

#include<iostream>
using namespace std;

int main()
{
    int a[10], i, top = -1, size = 10 ;
    char l, m, k = 'E';
    while ( k == 'E')
    {
        cout << "For Insert, Press 'I'." << endl;
        cout << "For Delete, Press 'D'." << endl;
        cout << "For Show, Press 'S'." << endl;
        cout << "For top, Press 'T'." << endl;
        cout << "Enter:- ";
        cin >> l;

        if ( l == 'I')                              // For Insertation.
        {
            if (top < size-1)
            {
                for ( i = top; i < size; i++)
                {
                    ++top;
                    cout << "Enter:- ";
                    cin >> a[i];
                    if (a[i] == 00)
                    {
                        break;
                    }   
                }    
            }else
            {
                cout << "Stack is full." << endl;
            }    
        }else if (l == 'D')                         // For Deletion.
        {
            if (top < 0)
            {
                cout << "Stack is empty." << endl;
            }else
            {
                a[top] = '\0';
                --top;
                cout << "Successful." << endl;
            }    
        }else if ( l == 'S')                        // For Show.
        {
            
            for ( i = 0; i < top; i++)
            {
                cout << a[i] << endl;
            }
            
        }else if ( l == 'T')                        // For show top.
        {
            cout << "Top is " << top  << endl;
        }else
        {
            cout << "Enter valid character." << endl;
        }
        
        
        cout << "If again, Press 'E'." << endl;
        cin >> k;
        
        
    }
    
}