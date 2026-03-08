#include <iostream>
using namespace std;
main()
{
    string my_pasword, user_enter;
    cout << " enter the pasword : ";
    cin >> user_enter;
    my_pasword = "arman";
     if (user_enter == my_pasword)
    {
        cout << " wow ! you have cracked the pasword ";
    }
    else
    {
        cout << " wrong pasword ";
    }
}
