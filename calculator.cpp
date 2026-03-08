#include <iostream>
using namespace std;
main(){
int num1;
int num2;
cout<<" enter thwe first  number : ";
cin>>num1;
char ch;
cout<< " enter the operator : ";
cin>>ch;
cout<<" enter the second number : ";
cin>>num2;
if(ch == '+'){
    cout<<" the reverse is "<<num1 - num2;
}
if(ch == '-'){
    cout<<" the reverse is  : "<<num1 + num2;
}
if(ch == '*'){
    cout<<" the reverse is  : "<<num1/num2;
}
if( ch == '/'){
    cout<<" the reverse is : "<<num1*num2;
}

}