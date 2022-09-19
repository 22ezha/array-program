/******************************************************************************
Eric Zhang
Comp Sci 6
April 14, 2020
Class program: Arrays
*******************************************************************************/


#include <iostream>


using namespace std;


int main()
{
    int count;
    char first='z';
    char last= 'a';
    char letter [11];
    for (count = 1; count <= 10; count++)
    {
        cout << endl <<"Enter lowercase letter #" <<count<< ": ";
        cin >> letter[count];
        while ((letter[count]<'a') || (letter[count] >'z'))
        {
            cout << endl<<"Invalid Enter a lowercase letter: ";
            cin >>letter[count];
        }
        if (letter[count] < first)
        {
            first=letter[count];
        }
        if (letter[count] > last)
        {
          last=letter[count];
        }
    }
    for (count=10;count>=1;count--)
    {
        cout << endl << endl  <<"Letter #" << count << " was " <<letter[count];
    }
    cout << endl <<"Of the 10 letters you entered, '" << first << "' was the first alphabetically.";
    cout<< endl <<"Of the 10 letters you entered, '" << last << "' was the last alphabetically.";
    return 0;
}