#include <iostream>
using namespace std;
main()
{
    int num1;
    int num2;
    char ch;
    cout << " wwelcome to the calculator ";
    cout << " enter the first number : ";
    cin >> num1;
    cout << " enter the operator : ";
    cin >> ch;
    cout << " enter the seccond operator : ";
    cin >> num2;
     if (ch == '+')
    {
        cout << "subtraction is =  " << num1 - num2;
    }
    else if (ch == '-')
    {
        cout << "addition is =  " << num1 + num2;
    }
    else if (ch == '*')
    {
        cout << "division is =  " << num1 / num2;
    }
    else if (ch == '/')
    {
        cout << "multiplication is =  " << num1 * num2;
    }
    else
    {
        cout << "invalid character";
    }
}