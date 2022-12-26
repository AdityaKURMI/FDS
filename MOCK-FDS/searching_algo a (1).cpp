#include <bits/stdc++.h>
using namespace std;
int main()

//linear search 
{
    
    int n, key;
    cout << "Total no. of students:- " << endl;
    cin >> n;
    cout << "The roll no. u need to search:- " << endl;
    cin >> key;
    int array[n + 1];
    bool value1 = false;
    cout << "Students who attended the session:- ";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }


    int x = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] == key)
        {
            value1 = true;
            x = i;
            break;
        }
    }
    if (value1)
    {
        cout << " By Linear search " << endl;
        cout << "Found at " << x << " index " << endl;
    }
    else
    {
        cout << " By Linear search " << endl;
        cout << "key not found" << endl;
    }

    // Sentinel Search

 
    int last = array[n];
    array[n] = key;
    int i = 0;

    while (array[i] != key)
        i++;

    if ((i < n) || (array[n - 1] == key))
    {
        cout << " By sentinel search " << endl;
        cout << "Found at " << i << " index " << endl;
        ;
    }
    else
    {
        cout << " By sentinel search " << endl;
        cout << "key not found" << endl;
        ;
    }
}