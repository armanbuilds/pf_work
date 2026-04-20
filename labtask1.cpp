#include <iostream>
using namespace std;

int add(int num1, int num2)
{
    int sum;
    sum = num1 + num2;
    return sum;
}
main()
{
    int num1, num2;
    cout << " enter the no 1  ";
    cin >> num1;
    cout << "enter the no 2";
    cin >> num2;
    int result = add(num1, num2);
    cout << " result " << result;
}