#include <iostream>
using namespace std;
main()
{
    string name1, name2, name3;
    int age1, age2, age3;
    cout << " enter the name of first brother: ";
    cin >> name1;
    cout << " enter the age of first brother : ";
    cin >> age1;
    cout << " enter the name  of second brother : ";
    cin >> name2;
    cout << " enter the age of second brother : ";
    cin >> age2;
    cout << "enter the name of third brother : ";
    cin >> name3;
    cout << " enter the age of third brother : ";
    cin >> age3;
    if (age1 > age2)
    {
        if (age2 > age3)
            cout << name1 << " is elder ";
    }
    if (age2 > age1)
    {
        cout << name2 << " is elder ";
    }
    if (age3 > age2)
    {
    
    cout << name3 << " is elder ";
}
}