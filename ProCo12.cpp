// Program for print square OR cube of a number using function.

#include<iostream>
using namespace std;


    int square(int num){
        num = num*num;
        return num;
    }

    int cube(int num){
        num = num*num*num;
        return num;
    }

int main()
{
    int k, ch;
    cout << " 1. Sqaure.\n";
    cout << " 2. Cube.\n";
    cin >> ch;
    switch (ch)
    {
    case 1:
        cout << "Enter number:- ";
        cin >> k;
        cout << square(k);
        break;
    case 2:
        cout << "Enter number:- ";
        cin >> k;
        cout << cube(k);
        break;
    default:
        break;
    }
    return 0;

}