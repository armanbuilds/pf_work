#include <iostream>
using namespace std;

int myfunction(int number);
int main()
{
    int number, result;
    cout << "enter a number:";
    cin >> number;
    result = myfunction(number);
    cout<<" result is : "<<result;
    return 0 ;
}
int myfunction(int number){
    int result = number* 5;
    return result;
}