// A program for a queue (Linerar queue).

#include<iostream>
using namespace std;

int main ()
{
    int a[10], i, top = -1, size = 10;
    char ch = 'E', ch1, l;

    while ( ch == 'E')
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
               
                for ( i = top+1; i < size; i++)
                {
                     ++top;
                    cout << "Enter:- ";
                    cin >> a[i];
                    if (a[i] == 00)
                    {
                        a[i] == '\0';
                        --top;
                        break;
                    }   
                }    
            }else
            {
                cout << "Queue is full." << endl;
            }    
        }else if (l == 'D')                         // For Deletion.
        {
            if (top < 0)
            {
                cout << "Queue is empty." << endl;
            }else
            {
                for ( i = 0; i < top; i++)
                {
                    a[i] = a[i+1];
                }
                
                --top;
                cout << "Successful." << endl;
            }    
        }else if ( l == 'S')                        // For Show.
        {
            
            for ( i = 0; i < top + 1; i++)
            {
                cout << a[i] << endl;
            }
            
        }else if ( l == 'T')                        // For show top.
        {
            cout << "Top is " << top + 1 << endl;
        }else
        {
            cout << "Enter valid character." << endl;
        }
        
        
        cout << "If again, Press 'E'." << endl;
        cin >> ch;
        
        
    }
    
}
