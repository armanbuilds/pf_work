#include <iostream>
using namespace std;
int main()
{
    int number1, number2;
    cout << " enter the first number : ";
    cin >> number1;
    cout << " enter the second number :  ";
    cin >> number2;
    if (number1 < number2)
    {
        cout << " number " << number2 << " is greater than number " << number1;
    }
    else
    {
        cout << " number " << number2<< " is less than " << number1;
    }
    return 0;
}
