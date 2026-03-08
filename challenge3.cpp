#include <iostream>
using namespace std;
main()
{
    string name1 , name2;
    cout << " enter the first name : ";
    cin>>name1;
    cout << " enter the second name : ";
     cin>>name2;
    if (name1 == name2)
    {
        cout << " both names are same ";
    }
    else
    {
        cout << " the both names are different ";
    }
}